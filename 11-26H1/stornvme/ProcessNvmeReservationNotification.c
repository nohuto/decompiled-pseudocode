/*
 * XREFs of ProcessNvmeReservationNotification @ 0x14002BF10
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1400264B0 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 */

char __fastcall ProcessNvmeReservationNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 i; // rcx
  __int64 v5; // r8
  __int128 v7; // [rsp+90h] [rbp-48h]

  v7 = *(_OWORD *)(GetSrbExtension(a2) + 4096);
  if ( DWORD1(v7) != -1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 224); i = (unsigned int)(i + 1) )
    {
      v5 = *(_QWORD *)(v3 + 8 * i + 1672);
      if ( v5 && *(_DWORD *)(v5 + 16) == DWORD1(v7) )
        goto LABEL_8;
    }
  }
  v5 = 0LL;
LABEL_8:
  if ( (*(_BYTE *)(v3 + 21) & 2) != 0 && *(_BYTE *)(v2 + 8) )
    StorPortExtendedFunction(86LL, v3, v5, 1LL);
  return 0;
}
