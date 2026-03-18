/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x140816134
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140B5C260 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1408162F8 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     BiDeleteElement @ 0x1409D0978 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1409D30C4 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementData @ 0x1409D4B60 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, __int64 a2, _BYTE *a3)
{
  struct _LIST_ENTRY *Blink; // rsi
  void *v7; // rbp
  __int64 v8; // rdi
  int v9; // ebx
  int v10; // r15d
  int v11; // eax
  __int64 v12; // rdx
  int ElementData; // eax
  __int64 v14; // r8
  __int64 Pool2; // rax
  __int64 v16; // rdx
  char *v17; // r9
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 *v21; // [rsp+88h] [rbp+20h]

  Blink = RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink;
  v20 = 0LL;
  v7 = 0LL;
  *a3 = 0;
  v8 = *(unsigned int *)(a1 + 8);
  v9 = 0;
  v10 = 8;
  if ( (*((_BYTE *)&Blink->Flink + v8) & 0x1F) != 8 )
  {
    v12 = *(unsigned int *)(a1 + 4);
    v21 = &v20;
    v19 = 8;
    ElementData = BcdGetElementData(a2, v12, &v20, &v19);
    v9 = ElementData;
    if ( ElementData == -1073741789 || ElementData == -2147483643 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v7 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v16 = *(unsigned int *)(a1 + 4);
      v21 = (__int64 *)Pool2;
      v9 = BcdGetElementData(a2, v16, Pool2, &v19);
      if ( v9 < 0 )
      {
LABEL_28:
        ExFreePoolWithTag(v7, 0x62536553u);
        return (unsigned int)v9;
      }
    }
    if ( v9 < 0 || (v9 = SepSecureBootValidateBcdDataAgainstBcdRule(a1, v21, v19), v9 < 0) )
    {
      if ( (*(_WORD *)((_BYTE *)&Blink->Flink + v8) & 0x1F) != 0 )
      {
        if ( (*(_WORD *)((_BYTE *)&Blink->Flink + v8) & 0x1F) == 1 )
        {
          v17 = (char *)&Blink->Flink + 2;
          v10 = 1;
        }
        else
        {
          if ( (*(_WORD *)((_BYTE *)&Blink->Flink + v8) & 0x1F) != 5
            && (*(_WORD *)((_BYTE *)&Blink->Flink + v8) & 0x1F) != 6
            && (*(_WORD *)((_BYTE *)&Blink->Flink + v8) & 0x1F) != 7 )
          {
            if ( (*(_WORD *)((_BYTE *)&Blink->Flink + v8) & 0x1F) == 8 )
              v9 = -1073741275;
            else
              v9 = -1069350909;
            goto LABEL_27;
          }
          v17 = (char *)&Blink->Flink + 2;
        }
      }
      else
      {
        v10 = *(unsigned __int16 *)((char *)&Blink->Flink + v8 + 2);
        v17 = (char *)&Blink->Flink + 4;
      }
      v9 = BcdSetElementDataWithFlags(a2, *(unsigned int *)(a1 + 4), v14, &v17[v8], v10);
      if ( v9 >= 0 )
        *a3 = 1;
    }
LABEL_27:
    if ( !v7 )
      return (unsigned int)v9;
    goto LABEL_28;
  }
  if ( !*(_WORD *)((char *)&Blink->Flink + v8 + 2) )
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
