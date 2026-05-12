/*
 * XREFs of NvmeControllerCompletionQueueInit @ 0x1400F19C8
 * Callers:
 *     NvmeControllerInitializeAdminQueue @ 0x1400F5F24 (NvmeControllerInitializeAdminQueue.c)
 *     NvmeControllerIoQueuesInitialize @ 0x1400F71AC (NvmeControllerIoQueuesInitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall NvmeControllerCompletionQueueInit(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  __int64 v6; // rax

  *(_QWORD *)a2 = a4;
  *(_QWORD *)(a2 + 8) = a5;
  v5 = *(_DWORD *)(a1 + 1216) * (2 * (unsigned int)a3 + 1);
  v6 = *(_QWORD *)(a1 + 920) + 4096LL;
  *(_WORD *)(a2 + 32) = a3;
  *(_QWORD *)(a2 + 16) = v6 + v5;
  *(_WORD *)(a2 + 34) = 0;
  *(_WORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  if ( a3 )
  {
    v6 = *(_QWORD *)(a1 + 1736);
    if ( *(_BYTE *)v6 )
    {
      if ( a3 <= *(_WORD *)(v6 + 2) )
      {
        LOBYTE(v6) = ((*(_DWORD *)(v6 + 12) & 0x40) != 0) + 1;
        *(_BYTE *)(a2 + 80) = v6;
      }
    }
  }
  return v6;
}
