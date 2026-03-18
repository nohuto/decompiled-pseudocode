/*
 * XREFs of PnpiCmResourceToBiosAddressQuad @ 0x1400B94C8
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1400B8A44 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosAddressQuad(__int64 a1, __int64 a2)
{
  bool v2; // zf
  unsigned int v6; // r9d
  __int64 i; // rdx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v8; // rdi
  unsigned __int8 Type; // al
  __int16 v10; // cx
  char v11; // al
  unsigned __int16 Flags; // dx
  ULONGLONG v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 Start; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 3) == 0;
  Start = 0LL;
  if ( !v2 )
    return 3221225473LL;
  v6 = *(_DWORD *)(a2 + 16);
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v8 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(a2 + 20 * i);
    Type = v8[1].Type;
    if ( Type == 3 || Type == 7 )
    {
      *(_BYTE *)(a1 + 5) = 0;
      v10 = v8[1].Flags & 3;
      v11 = v10 == 0;
      *(_BYTE *)(a1 + 5) = v10 == 0;
      Flags = v8[1].Flags;
      if ( (Flags & 0x20) != 0 )
      {
        v11 = 3 - (v10 != 0);
      }
      else if ( (Flags & 8) != 0 )
      {
        v11 = 5 - (v10 != 0);
      }
      else if ( (Flags & 4) != 0 )
      {
        v11 = 7 - (v10 != 0);
      }
      *(_BYTE *)(a1 + 5) = v11;
      v13 = RtlCmDecodeMemIoResource(v8 + 1, &Start);
      v14 = Start + v13 - 1;
      *(_QWORD *)(a1 + 14) = Start;
      *(_QWORD *)(a1 + 22) = v14;
      v8[1].Type = 0;
      return 0LL;
    }
  }
  return 0LL;
}
