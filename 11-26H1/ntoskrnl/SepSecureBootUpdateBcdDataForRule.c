/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x14081C344
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140B85B08 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x14081C508 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementData @ 0x1409A5B40 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, void *a2, _BYTE *a3)
{
  _BYTE *v3; // rsi
  void *v7; // rbp
  __int64 v8; // rdi
  NTSTATUS v9; // ebx
  ULONG v10; // r15d
  int v11; // eax
  ULONG v12; // edx
  NTSTATUS ElementData; // eax
  BCD_FLAGS v14; // r8d
  __int64 v15; // r9
  void *Pool2; // rax
  ULONG v17; // edx
  char *v18; // r9
  ULONG BufferSize; // [rsp+70h] [rbp+8h] BYREF
  __int64 Buffer; // [rsp+80h] [rbp+18h] BYREF
  __int64 *p_Buffer; // [rsp+88h] [rbp+20h]

  v3 = RtlpBootStatHandleLock.SchedulerApc.Reserved[2];
  Buffer = 0LL;
  v7 = 0LL;
  *a3 = 0;
  v8 = *(unsigned int *)(a1 + 8);
  v9 = 0;
  v10 = 8;
  if ( (v3[v8] & 0x1F) != 8 )
  {
    v12 = *(_DWORD *)(a1 + 4);
    p_Buffer = &Buffer;
    BufferSize = 8;
    ElementData = BcdGetElementData(a2, v12, &Buffer, &BufferSize);
    v9 = ElementData;
    if ( ElementData == -1073741789 || ElementData == -2147483643 )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v7 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v17 = *(_DWORD *)(a1 + 4);
      p_Buffer = (__int64 *)Pool2;
      v9 = BcdGetElementData(a2, v17, Pool2, &BufferSize);
      if ( v9 < 0 )
      {
LABEL_28:
        ExFreePoolWithTag(v7, 0x62536553u);
        return (unsigned int)v9;
      }
    }
    if ( v9 < 0 || (v9 = SepSecureBootValidateBcdDataAgainstBcdRule(a1, p_Buffer, BufferSize, v15), v9 < 0) )
    {
      if ( (*(_WORD *)&v3[v8] & 0x1F) != 0 )
      {
        if ( (*(_WORD *)&v3[v8] & 0x1F) == 1 )
        {
          v18 = v3 + 2;
          v10 = 1;
        }
        else
        {
          if ( (*(_WORD *)&v3[v8] & 0x1F) != 5 && (*(_WORD *)&v3[v8] & 0x1F) != 6 && (*(_WORD *)&v3[v8] & 0x1F) != 7 )
          {
            if ( (*(_WORD *)&v3[v8] & 0x1F) == 8 )
              v9 = -1073741275;
            else
              v9 = -1069350909;
            goto LABEL_27;
          }
          v18 = v3 + 2;
        }
      }
      else
      {
        v10 = *(unsigned __int16 *)&v3[v8 + 2];
        v18 = v3 + 4;
      }
      v9 = BcdSetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v14, &v18[v8], v10);
      if ( v9 >= 0 )
        *a3 = 1;
    }
LABEL_27:
    if ( !v7 )
      return (unsigned int)v9;
    goto LABEL_28;
  }
  if ( !*(_WORD *)&v3[v8 + 2] )
  {
    v11 = BiDeleteElement(a2, *(unsigned int *)(a1 + 4));
    v9 = v11;
    if ( v11 == -1073741275 )
    {
      return 0;
    }
    else if ( v11 >= 0 )
    {
      *a3 = 1;
    }
  }
  return (unsigned int)v9;
}
