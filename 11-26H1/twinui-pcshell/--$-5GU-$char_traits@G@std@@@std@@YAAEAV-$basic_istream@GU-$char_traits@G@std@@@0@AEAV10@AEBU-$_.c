/*
 * XREFs of ??$?5GU?$char_traits@G@std@@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@AEAV10@AEBU?$_Timeobj@GPEAUtm@@@0@@Z @ 0x18013B650
 * Callers:
 *     _anonymous_namespace_::TimeStringToTimePoint @ 0x18013B524 (_anonymous_namespace_--TimeStringToTimePoint.c)
 * Callees:
 *     ??$use_facet@V?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18013BF44 (--$use_facet@V-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::operator>><unsigned short,std::char_traits<unsigned short>>(__int64 a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdx
  std::locale *v6; // rcx
  __int64 v7; // r13
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v17; // [rsp+50h] [rbp-78h] BYREF
  char v18; // [rsp+58h] [rbp-70h]
  char v19; // [rsp+59h] [rbp-6Fh]
  __int16 v20; // [rsp+5Ah] [rbp-6Eh]
  int v21; // [rsp+5Ch] [rbp-6Ch]
  __int64 v22; // [rsp+60h] [rbp-68h] BYREF
  bool v23; // [rsp+68h] [rbp-60h]
  __int16 v24; // [rsp+6Ah] [rbp-5Eh]
  __int64 v25; // [rsp+70h] [rbp-58h]
  _BYTE v27[8]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v28; // [rsp+88h] [rbp-40h]
  _BYTE v29[16]; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+E0h] [rbp+18h] BYREF

  v3 = a1;
  v32 = 0;
  v25 = a1;
  v4 = std::basic_ios<unsigned short>::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, v5, v4);
  if ( (unsigned __int8)std::basic_istream<unsigned short>::_Ipfx(v3, 0LL) )
  {
    v6 = (std::locale *)std::ios_base::getloc(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v27);
    v7 = std::use_facet<std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>>(v6);
    if ( v28 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      if ( v8 )
        (**v8)(v8, 1LL);
    }
    v9 = a2[2];
    v10 = a2[1];
    v11 = *a2;
    v12 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
    v17 = 0LL;
    v18 = 1;
    v19 = BYTE1(v28);
    v20 = 0;
    v21 = HIDWORD(v28);
    v13 = std::basic_ios<unsigned short>::rdbuf(v12);
    try
    {
      v22 = v13;
      v23 = v13 == 0;
      v24 = 0;
      std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::get(
        v7,
        v29,
        &v22,
        &v17,
        v12,
        &v32,
        v11,
        v10,
        v9);
    }
    catch ( ... )
    {
      LOBYTE(v14) = 1;
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v14);
      v3 = a1;
    }
  }
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v32, 0LL);
  v15 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
  if ( v15 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, v15);
  return v3;
}
