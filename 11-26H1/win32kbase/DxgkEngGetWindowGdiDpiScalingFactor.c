/*
 * XREFs of DxgkEngGetWindowGdiDpiScalingFactor @ 0x14013A740
 * Callers:
 *     <none>
 * Callees:
 *     GreGetScaledLogPixels @ 0x14013A7E0 (GreGetScaledLogPixels.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngGetWindowGdiDpiScalingFactor(__int64 a1)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned int (__fastcall *v4)(__int64, unsigned __int16 *); // rax
  unsigned __int16 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 2656LL);
  if ( v2
    && v2() >= 0
    && (v4 = *(unsigned int (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3)
                                                                                    + 24)
                                                                        + 2664LL)) != 0LL
    && v4(a1, &v6) )
  {
    return (unsigned __int16)GreGetScaledLogPixels(v6) / 0x60u;
  }
  else
  {
    return 1LL;
  }
}
