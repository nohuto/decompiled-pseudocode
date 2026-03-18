/*
 * XREFs of HUBDSM_AllocatingBufferForMsOsExtendedPropertyDescriptor @ 0x14001FD50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBDSM_AllocatingBufferForMsOsExtendedPropertyDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 Pool2; // rax
  int v4; // edx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0;
  Pool2 = ExAllocatePool2(64LL, *(unsigned int *)(v1 + 1740), 1681082453LL);
  *(_QWORD *)(v1 + 2120) = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        v4,
        5,
        60,
        (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
    }
    v2 = -1073741823;
  }
  return ((v2 >> 31) & 0xFFFFFFF4) + 4077;
}
