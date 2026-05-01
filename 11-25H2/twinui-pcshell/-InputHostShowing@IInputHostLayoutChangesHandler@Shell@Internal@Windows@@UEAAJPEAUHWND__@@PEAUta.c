/*
 * XREFs of ?InputHostShowing@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1803AC180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::Shell::IInputHostLayoutChangesHandler::InputHostShowing(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 144);
  if ( !v6 )
    return 0LL;
  v8 = a6;
  v9 = a5;
  v12 = a4;
  v10 = a3;
  v11 = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, int *, __int64 *, __int64 *))(*(_QWORD *)v6 + 32LL))(
           v6,
           &v11,
           &v10,
           &v12,
           &v9,
           &v8);
}
