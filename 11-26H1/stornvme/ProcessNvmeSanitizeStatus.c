/*
 * XREFs of ProcessNvmeSanitizeStatus @ 0x14002C040
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1400264B0 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x140007B70 (NVMeRequestComplete.c)
 *     NVMeQueueWorkItem @ 0x14001EC70 (NVMeQueueWorkItem.c)
 */

char __fastcall ProcessNvmeSanitizeStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rcx
  __int64 v6; // rbp
  int v7; // esi
  __int64 v8; // r9
  int v9; // eax
  __int64 SrbExtension; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  __int128 v15; // [rsp+D0h] [rbp-58h]

  v15 = *(_OWORD *)(GetSrbExtension(a2) + 4096);
  if ( DWORD1(v15) != -1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(a1 + 8 * i + 1672);
      if ( v6 && *(_DWORD *)(v6 + 16) == DWORD1(v15) )
        goto LABEL_8;
    }
  }
  v6 = 0LL;
LABEL_8:
  v7 = *(_WORD *)(a3 + 2) & 7;
  if ( v7 )
  {
    if ( v7 != 2 )
    {
      v8 = *(_QWORD *)(a1 + 4056);
      if ( v8 )
      {
        v9 = *(_DWORD *)(a1 + 4064);
        if ( (v9 & 1) != 0 )
        {
          SrbExtension = GetSrbExtension(*(_QWORD *)(a1 + 4056));
          *(_BYTE *)(SrbExtension + 4225) |= 8u;
          *(_BYTE *)(v11 + 3) = 4;
          NVMeRequestComplete(a1, v11, 0);
          *(_DWORD *)(a1 + 4064) &= ~1u;
          *(_QWORD *)(a1 + 4056) = 0LL;
        }
        else if ( v7 == 3 )
        {
          *(_DWORD *)(a1 + 4064) = v9 | 1;
          NVMeQueueWorkItem(a1, (__int64)NVMeSanitizeRecoverWorkItem, *(unsigned int *)(a3 + 4), v8);
        }
        else
        {
          v12 = GetSrbExtension(*(_QWORD *)(a1 + 4056));
          *(_BYTE *)(v12 + 4225) |= 8u;
          *(_BYTE *)(v13 + 3) = 1;
          NVMeRequestComplete(a1, v13, 0);
          *(_QWORD *)(a1 + 4056) = 0LL;
        }
        if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
          StorPortExtendedFunction(87LL, a1, v6, 1LL);
      }
    }
  }
  return 0;
}
