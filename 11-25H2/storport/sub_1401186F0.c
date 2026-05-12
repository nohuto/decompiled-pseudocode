/*
 * XREFs of sub_1401186F0 @ 0x1401186F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400F8C38 @ 0x1400F8C38 (sub_1400F8C38.c)
 *     sub_140120CDC @ 0x140120CDC (sub_140120CDC.c)
 */

NTSTATUS __fastcall sub_1401186F0(__int64 a1)
{
  _DWORD *v1; // r15
  char v3; // si
  unsigned int v4; // eax
  int v5; // edi
  int v6; // r14d
  unsigned int i; // ebp
  int v8; // eax
  int v9; // eax
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  v1 = qword_140168E40;
  Interval.QuadPart = -2000LL;
  v3 = 0;
  if ( (int)sub_1400F8C38(a1, 0LL) >= 0 )
  {
    v3 = 1;
    while ( 1 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 472), Executive, 0, 0, 0LL);
      if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
        break;
      do
      {
        while ( 1 )
        {
          v4 = v1[3];
          v5 = 0;
          v6 = 0;
          for ( i = 0; i < v4; ++i )
          {
            v8 = sub_140120CDC(*(_QWORD *)(a1 + 256), i, 0LL) - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( !v9 || (unsigned int)(v9 - 1) <= 1 )
                ++v5;
            }
            else
            {
              ++v5;
              ++v6;
            }
            v4 = v1[3];
          }
          if ( v6 != v4 )
            break;
          if ( !v5 )
            goto LABEL_14;
          KeDelayExecutionThread(0, 0, &Interval);
        }
      }
      while ( v5 );
LABEL_14:
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 256) + 16LL), 0);
    }
  }
  ZwClose(*(HANDLE *)(a1 + 464));
  *(_QWORD *)(a1 + 464) = 0LL;
  if ( v3 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
  return PsTerminateSystemThread(0);
}
