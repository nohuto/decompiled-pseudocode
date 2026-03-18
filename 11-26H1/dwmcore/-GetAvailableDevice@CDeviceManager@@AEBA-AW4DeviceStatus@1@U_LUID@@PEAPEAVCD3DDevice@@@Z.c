/*
 * XREFs of ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F7090
 * Callers:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDeviceManager::GetAvailableDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  __int64 *v4; // r10
  __int64 *v5; // r11
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  *a3 = 0LL;
  v4 = *(__int64 **)(a1 + 56);
  v5 = *(__int64 **)(a1 + 64);
  while ( v4 != v5 )
  {
    v6 = *v4;
    if ( a2 == *(_QWORD *)(*v4 + 944) )
    {
      if ( *(_DWORD *)(v6 + 1124) )
      {
        return 2;
      }
      else
      {
        *a3 = v6;
        if ( _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u) <= 0 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v8);
        return 1;
      }
    }
    v4 += 2;
  }
  return v3;
}
