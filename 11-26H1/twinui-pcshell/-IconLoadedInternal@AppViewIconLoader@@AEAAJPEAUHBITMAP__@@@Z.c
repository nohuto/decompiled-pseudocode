/*
 * XREFs of ?IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z @ 0x1801F5190
 * Callers:
 *     ?IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z @ 0x1801F5140 (-IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIBufferByteAccess@Streams@Storage@Windows@@@?$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBufferByteAccess@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F5410 (--$query@UIBufferByteAccess@Streams@Storage@Windows@@@-$com_ptr_t@UIBuffer@Streams@Storage@Windo.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppViewIconLoader::IconLoadedInternal(AppViewIconLoader *this, HBITMAP a2)
{
  __int64 v4; // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // rax
  int v9; // eax
  __int64 v10; // r11
  int v11; // r9d
  int v12; // r10d
  int v13; // ebx
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 pv; // [rsp+28h] [rbp-40h] BYREF
  __int128 v19; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v22 = 0LL;
  v4 = **((_QWORD **)this + 5);
  v22 = 0LL;
  v5 = *(__int64 (**)(void))(v4 + 48);
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x25,
        (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
        (const char *)(unsigned int)v6,
        v17);
    v21 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 56LL))(v22, &v21);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x28,
        (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
        (const char *)(unsigned int)v7,
        v17);
    v23 = 0LL;
    v8 = (_QWORD *)wil::com_ptr_t<Windows::Storage::Streams::IBuffer,wil::err_exception_policy>::query<Windows::Storage::Streams::IBufferByteAccess>(
                     &v22,
                     &v17);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v8 + 24LL))(*v8, &v23);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B,
        (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
        (const char *)(unsigned int)v9,
        v17);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    pv = 0LL;
    v19 = 0LL;
    if ( !GetObjectW(a2, 32, &pv) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2E,
        (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
        (const char *)0x80004005LL,
        v17);
    v10 = *((_QWORD *)&v19 + 1);
    if ( !*((_QWORD *)&v19 + 1) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2F,
        (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
        (const char *)0x80004003LL,
        v17);
    if ( WORD1(v19) != 32 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x30,
        (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
        (const char *)0x800707D0LL,
        v17);
    v11 = DWORD2(pv);
    v12 = HIDWORD(pv);
    if ( HIDWORD(pv) * DWORD2(pv) > v21 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x31,
        (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
        (const char *)0x800700EALL,
        v17);
    v13 = 0;
    if ( SDWORD2(pv) > 0 )
    {
      while ( 1 )
      {
        memcpy_0((void *)(v23 + v12 * (v11 - v13 - 1)), (const void *)(v10 + v12 * v13), v12);
        ++v13;
        v11 = DWORD2(pv);
        if ( v13 >= SDWORD2(pv) )
          break;
        v10 = *((_QWORD *)&v19 + 1);
        v12 = HIDWORD(pv);
      }
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5));
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3B,
        (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
        (const char *)(unsigned int)v14,
        v17);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E,
                           (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
                           v15);
  }
  return result;
}
