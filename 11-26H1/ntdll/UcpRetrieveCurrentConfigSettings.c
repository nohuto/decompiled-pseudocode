/*
 * XREFs of UcpRetrieveCurrentConfigSettings @ 0x180157C04
 * Callers:
 *     UcOnUnexpectedCodePath @ 0x180157700 (UcOnUnexpectedCodePath.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     ZwQueryWnfStateData @ 0x180161C50 (ZwQueryWnfStateData.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

int __fastcall UcpRetrieveCurrentConfigSettings(_DWORD *a1, _BYTE *a2, _BYTE *a3)
{
  _DWORD *Heap_0; // rax
  _DWORD *Buffer; // rbx
  unsigned int v8; // r9d
  __int64 i; // r8
  SIZE_T Size; // [rsp+30h] [rbp-38h] BYREF
  WNF_STATE_NAME StateName; // [rsp+38h] [rbp-30h] BYREF

  StateName = (WNF_STATE_NAME)WNF_UCP_CLIENT_CONFIG_BUFFER;
  Size = 0LL;
  ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)&Size + 1, 0LL, (PULONG)&Size);
  LODWORD(Heap_0) = Size;
  if ( (_DWORD)Size )
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
    Buffer = Heap_0;
    if ( Heap_0 )
    {
      memset_thunk_772440563353939046(Heap_0, 0, (unsigned int)Size);
      if ( ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)&Size + 1, Buffer, (PULONG)&Size) >= 0
        && *Buffer == 1 )
      {
        v8 = Buffer[1];
        for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
        {
          if ( Buffer[5 * i + 2] == *a1 )
          {
            *a2 = BYTE1(Buffer[5 * i + 6]);
            switch ( Buffer[5 * i + 5] )
            {
              case 1:
                if ( Buffer[5 * i + 4] != a1[2] )
                  continue;
                break;
              case 2:
                break;
              case 4:
                goto LABEL_15;
              default:
                *a3 = 0;
                continue;
            }
            if ( Buffer[5 * i + 3] == a1[1] )
            {
LABEL_15:
              *a3 = Buffer[5 * i + 6];
              break;
            }
          }
        }
      }
      LODWORD(Heap_0) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    }
  }
  return (int)Heap_0;
}
