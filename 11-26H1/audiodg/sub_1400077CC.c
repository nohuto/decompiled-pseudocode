/*
 * XREFs of sub_1400077CC @ 0x1400077CC
 * Callers:
 *     sub_1400075D4 @ 0x1400075D4 (sub_1400075D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400077CC(__int64 a1)
{
  signed int v2; // ebx
  PTP_POOL Threadpool; // rax
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax
  signed int v7; // eax
  signed int v8; // eax

  if ( *(_QWORD *)a1 )
    return 0;
  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)a1 = Threadpool;
  if ( Threadpool )
    goto LABEL_12;
  LastError = GetLastError();
  v2 = LastError;
  if ( LastError > 0 )
    v2 = (unsigned __int16)LastError | 0x80070000;
  if ( v2 >= 0 )
  {
LABEL_12:
    if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)a1, 1u) )
      goto LABEL_6;
    v7 = GetLastError();
    v2 = v7;
    if ( v7 > 0 )
      v2 = (unsigned __int16)v7 | 0x80070000;
    if ( v2 >= 0 )
    {
LABEL_6:
      ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
      *(_QWORD *)(a1 + 168) = ThreadpoolCleanupGroup;
      if ( ThreadpoolCleanupGroup )
      {
        v2 = 0;
LABEL_9:
        SetThreadpoolThreadMaximum(*(PTP_POOL *)a1, 1u);
        *(_QWORD *)(a1 + 16) = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 168);
        *(_QWORD *)(a1 + 32) = 0LL;
        return (unsigned int)v2;
      }
      v8 = GetLastError();
      v2 = v8;
      if ( v8 > 0 )
        v2 = (unsigned __int16)v8 | 0x80070000;
      if ( v2 >= 0 )
        goto LABEL_9;
    }
  }
  return (unsigned int)v2;
}
