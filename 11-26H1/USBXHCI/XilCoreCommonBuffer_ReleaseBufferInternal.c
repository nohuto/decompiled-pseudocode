/*
 * XREFs of XilCoreCommonBuffer_ReleaseBufferInternal @ 0x140033410
 * Callers:
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x140033370 (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     CommonBuffer_ReleaseBuffer @ 0x14003D258 (CommonBuffer_ReleaseBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003D4C8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall XilCoreCommonBuffer_ReleaseBufferInternal(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  _QWORD *result; // rax
  unsigned int v7; // r9d
  _DWORD *v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r8

  v2 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_DWORD *)(a2 + 64) = 0;
  if ( v2 <= 0x1000 )
  {
    v7 = 0;
    v8 = (_DWORD *)(a1 + 32);
    do
    {
      v9 = a1 + ((unsigned __int64)v7 << 6) + 32;
      if ( v2 == *v8 )
        break;
      ++v7;
      v8 += 16;
    }
    while ( v7 < 2 );
    if ( v9 )
    {
      result = (_QWORD *)(v9 + 32);
      v10 = *(_QWORD *)(v9 + 32);
      if ( *(_QWORD *)(v10 + 8) != v9 + 32 )
        __fastfail(3u);
      *(_QWORD *)a2 = v10;
      *(_QWORD *)(a2 + 8) = result;
      *(_QWORD *)(v10 + 8) = a2;
      *result = a2;
      ++*(_DWORD *)(v9 + 28);
    }
    else
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        return (_QWORD *)WPP_RECORDER_SF_d(
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                           a2,
                           8,
                           19,
                           (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
                           v2);
      }
    }
  }
  else
  {
    v4 = *(_BYTE **)a1;
    v5 = *(_QWORD *)(a2 + 96);
    if ( v4[80] )
      return (_QWORD *)SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(*(_QWORD *)v4 + 104LL), v5);
    else
      return (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 1664))(
                         WdfDriverGlobals,
                         *(_QWORD *)(v5 + 16),
                         a1);
  }
  return result;
}
