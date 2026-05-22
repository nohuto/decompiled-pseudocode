/*
 * XREFs of ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EC148
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800EB358 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800C4808 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800C482C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800C482C.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800DECDC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E8CA4 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8E90 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800E9FC8 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800EA340 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@EV?$allocator@E@std@@@std@@@std@@QEAA@XZ @ 0x1800EA454 (--1-$_Tidy_guard@V-$vector@EV-$allocator@E@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_raw@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1800ED3F8 (-_Buy_raw@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800ED4BC (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x1800ED500 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@H@Z.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_J@Z @ 0x1800ED568 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@_J@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::ValidateReportParsers(HidLampArrayDevice *this)
{
  __int64 v2; // rcx
  int v3; // r12d
  char *v4; // rbx
  char *v5; // rsi
  char *v6; // rdi
  __int64 v7; // rax
  unsigned __int8 v8; // r8
  unsigned __int64 v9; // rdx
  char *v10; // r11
  char *v11; // r9
  char *v12; // r10
  char v13; // r15
  __m128i si128; // xmm6
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  const char *v43; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r8
  bool v48; // zf
  char v49; // al
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rbx
  _QWORD *v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  const char *v64; // rax
  __int64 v65; // rax
  char v66; // al
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rbx
  _QWORD *v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rbx
  _QWORD *v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rbx
  _QWORD *v98; // rax
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rdx
  __int64 v107; // rcx
  char *v108; // [rsp+30h] [rbp-D8h]
  char *v109; // [rsp+30h] [rbp-D8h]
  unsigned __int8 v110; // [rsp+68h] [rbp-A0h]
  __int128 v111; // [rsp+70h] [rbp-98h] BYREF
  __int64 v112; // [rsp+80h] [rbp-88h]
  char *v113; // [rsp+88h] [rbp-80h]
  __int64 v114; // [rsp+90h] [rbp-78h] BYREF
  __int64 v115; // [rsp+98h] [rbp-70h]
  char *v116; // [rsp+A0h] [rbp-68h]
  char *v117; // [rsp+A8h] [rbp-60h]
  char *v118; // [rsp+B0h] [rbp-58h]
  char *v119; // [rsp+B8h] [rbp-50h]
  char *v120; // [rsp+C0h] [rbp-48h]
  char *v121; // [rsp+C8h] [rbp-40h]
  char *v122; // [rsp+D0h] [rbp-38h]
  char *v123[2]; // [rsp+E0h] [rbp-28h] BYREF
  __m128i v124; // [rsp+F0h] [rbp-18h]
  void *v125[2]; // [rsp+100h] [rbp-8h] BYREF
  __m128i v126; // [rsp+110h] [rbp+8h]
  void *v127[2]; // [rsp+120h] [rbp+18h] BYREF
  __m128i v128; // [rsp+130h] [rbp+28h]
  void *v129[2]; // [rsp+140h] [rbp+38h] BYREF
  __m128i v130; // [rsp+150h] [rbp+48h]
  void *v131[2]; // [rsp+160h] [rbp+58h] BYREF
  __m128i v132; // [rsp+170h] [rbp+68h]
  void *v133[2]; // [rsp+180h] [rbp+78h] BYREF
  __m128i v134; // [rsp+190h] [rbp+88h]
  void *v135[2]; // [rsp+1A0h] [rbp+98h] BYREF
  __m128i v136; // [rsp+1B0h] [rbp+A8h]
  void *v137[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  __m128i v138; // [rsp+1D0h] [rbp+C8h]
  void *v139[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  __m128i v140; // [rsp+1F0h] [rbp+E8h]
  void *v141[3]; // [rsp+200h] [rbp+F8h] BYREF
  unsigned __int64 v142; // [rsp+218h] [rbp+110h]
  void *v143; // [rsp+220h] [rbp+118h] BYREF
  __m128i v144; // [rsp+230h] [rbp+128h]
  void *v145; // [rsp+240h] [rbp+138h] BYREF
  __m128i v146; // [rsp+250h] [rbp+148h]
  void *v147; // [rsp+260h] [rbp+158h] BYREF
  __m128i v148; // [rsp+270h] [rbp+168h]
  void *v149; // [rsp+280h] [rbp+178h] BYREF
  __m128i v150; // [rsp+290h] [rbp+188h]
  void *v151; // [rsp+2A0h] [rbp+198h] BYREF
  __m128i v152; // [rsp+2B0h] [rbp+1A8h]
  void *v153; // [rsp+2C0h] [rbp+1B8h] BYREF
  __m128i v154; // [rsp+2D0h] [rbp+1C8h]
  wil::details::in1diag3 *retaddr; // [rsp+320h] [rbp+218h]

  v2 = *((_QWORD *)this + 73);
  v3 = 0;
  if ( v2
    && *((_QWORD *)this + 74)
    && (v118 = (char *)this + 600, *((_QWORD *)this + 75))
    && (v4 = (char *)this + 608, *((_QWORD *)this + 76))
    && (v5 = (char *)this + 616, *((_QWORD *)this + 77))
    && (v6 = (char *)this + 624, *((_QWORD *)this + 78)) )
  {
    v111 = 0LL;
    v112 = 0LL;
    std::vector<unsigned char>::_Buy_raw(&v111);
    v7 = v111;
    *(_DWORD *)v111 = 0;
    *(_WORD *)(v7 + 4) = 0;
    *((_QWORD *)&v111 + 1) = v7 + 6;
    v114 = 0LL;
    std::_Tidy_guard<std::vector<unsigned char>>::~_Tidy_guard<std::vector<unsigned char>>(&v114);
    *(_BYTE *)v111 = *(_BYTE *)(*((_QWORD *)this + 73) + 16LL);
    *(_BYTE *)(v111 + 1) = *(_BYTE *)(*((_QWORD *)this + 74) + 16LL);
    *(_BYTE *)(v111 + 2) = *(_BYTE *)(*((_QWORD *)this + 75) + 16LL);
    *(_BYTE *)(v111 + 3) = *(_BYTE *)(*(_QWORD *)v4 + 16LL);
    *(_BYTE *)(v111 + 4) = *(_BYTE *)(*(_QWORD *)v5 + 16LL);
    *(_BYTE *)(v111 + 5) = *(_BYTE *)(*(_QWORD *)v6 + 16LL);
    std::_Sort_unchecked<unsigned char *,std::less<void>>(
      (unsigned __int8 *)v111,
      *((unsigned __int8 **)&v111 + 1),
      *((_QWORD *)&v111 + 1) - v111,
      0);
    v8 = 0;
    v110 = 0;
    v9 = 0LL;
    v115 = 0LL;
    v121 = (char *)this + 624;
    v114 = (__int64)this + 616;
    v10 = (char *)this + 624;
    v120 = (char *)this + 600;
    v119 = (char *)this + 624;
    v11 = (char *)this + 608;
    v117 = (char *)this + 608;
    v12 = (char *)this + 616;
    v116 = (char *)this + 616;
    v13 = 1;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v15 = v111;
    if ( *((_QWORD *)&v111 + 1) != (_QWORD)v111 )
    {
      v121 = (char *)this + 624;
      v114 = (__int64)this + 616;
      v120 = (char *)this + 600;
      v119 = (char *)this + 624;
      v117 = (char *)this + 608;
      v116 = (char *)this + 616;
      v122 = (char *)this + 608;
      v118 = (char *)this + 600;
      while ( 1 )
      {
        LODWORD(v113) = v8;
        if ( v8 == *(_BYTE *)(v15 + v9) )
        {
          v16 = std::to_string(v127, v8);
          v17 = std::string::string(v123, "One or more LampArray HID reports have duplicate IDs: ");
          std::operator+<char>((__int64)v125, (__int64)v17, v16);
          if ( v124.m128i_i64[1] > 0xFuLL )
            std::_Deallocate<16>(v123[0], (struct std::nothrow_t *)(v124.m128i_i64[1] + 1));
          v124 = si128;
          LOBYTE(v123[0]) = 0;
          v20 = v128.m128i_i64[1];
          if ( v128.m128i_i64[1] > 0xFuLL )
            std::_Deallocate<16>(v127[0], (struct std::nothrow_t *)(v128.m128i_i64[1] + 1));
          LampArrayTelemetry::GetInstance(v18, v20, v19);
          LampArrayTelemetry::LogLampArrayHidReportFailure(
            v21,
            (__int64)v125,
            2147942487LL,
            (__int64)this + 24,
            *((_WORD *)this + 269),
            *((_WORD *)this + 270),
            *((_WORD *)this + 271));
          if ( v126.m128i_i64[1] > 0xFuLL )
            std::_Deallocate<16>(v125[0], (struct std::nothrow_t *)(v126.m128i_i64[1] + 1));
          v9 = v115;
          v15 = v111;
          if ( v110 == *(_BYTE *)(v111 + v115) )
            break;
        }
        v8 = *(_BYTE *)(v15 + v9);
        v110 = v8;
        v115 = ++v9;
        if ( v9 >= *((_QWORD *)&v111 + 1) - v15 )
        {
          v4 = v122;
          v11 = v122;
          v12 = (char *)this + 616;
          v10 = (char *)this + 624;
          goto LABEL_19;
        }
      }
      LODWORD(v109) = (_DWORD)v113;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x371,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x80070057LL,
        (int)"Reports have duplicate Id:%d",
        v109);
      goto LABEL_61;
    }
LABEL_19:
    v22 = *(int *)(*((_QWORD *)this + 73) + 56LL);
    if ( v22 != *(_QWORD *)(*(_QWORD *)v118 + 56LL)
      || v22 != *(_QWORD *)(*(_QWORD *)v4 + 56LL)
      || (_DWORD)v22 != *(_DWORD *)(*(_QWORD *)v5 + 192LL)
      || (v23 = 0, v22 != *(_QWORD *)(*(_QWORD *)v6 + 128LL)) )
    {
      v23 = 1;
    }
    if ( !v23 )
    {
      v45 = *(_QWORD *)v11;
      v46 = *(unsigned __int8 *)(*(_QWORD *)v11 + 632LL);
      v47 = *(_QWORD *)v12;
      if ( (_DWORD)v46 != *(_DWORD *)(*(_QWORD *)v12 + 224LL)
        || (v48 = v46 == *(_QWORD *)(*(_QWORD *)v10 + 272LL), v49 = 0, !v48) )
      {
        v49 = 1;
      }
      if ( v49 )
      {
        v50 = std::to_string(v141, *(_QWORD *)(*(_QWORD *)v121 + 272LL));
        v51 = std::to_string(v129, *(unsigned int *)(*(_QWORD *)v114 + 224LL));
        v52 = std::to_string(v131, *(_QWORD *)(*((_QWORD *)this + 76) + 632LL));
        v53 = std::string::string(v133, "RedChannel logical max is not the same across reports.");
        v54 = std::operator+<char>((__int64)v135, v53, " LampAttributesResponse:");
        v55 = (_QWORD *)std::operator+<char>((__int64)v137, v54, v52);
        v56 = std::operator+<char>((__int64)v139, v55, ", LampMultiUpdate:");
        v57 = (_QWORD *)std::operator+<char>((__int64)v127, v56, v51);
        v58 = std::operator+<char>((__int64)v125, v57, ", LampRangeUpdate:");
        std::operator+<char>((__int64)v123, v58, v50);
        if ( v126.m128i_i64[1] > 0xFuLL )
          std::_Deallocate<16>(v125[0], (struct std::nothrow_t *)(v126.m128i_i64[1] + 1));
        v126 = si128;
        LOBYTE(v125[0]) = 0;
        if ( v128.m128i_i64[1] > 0xFuLL )
          std::_Deallocate<16>(v127[0], (struct std::nothrow_t *)(v128.m128i_i64[1] + 1));
        v128 = si128;
        LOBYTE(v127[0]) = 0;
        if ( v140.m128i_i64[1] > 0xFuLL )
          std::_Deallocate<16>(v139[0], (struct std::nothrow_t *)(v140.m128i_i64[1] + 1));
        v140 = si128;
        LOBYTE(v139[0]) = 0;
        if ( v138.m128i_i64[1] > 0xFuLL )
          std::_Deallocate<16>(v137[0], (struct std::nothrow_t *)(v138.m128i_i64[1] + 1));
        v138 = si128;
        LOBYTE(v137[0]) = 0;
        if ( v136.m128i_i64[1] > 0xFuLL )
          std::_Deallocate<16>(v135[0], (struct std::nothrow_t *)(v136.m128i_i64[1] + 1));
        v136 = si128;
        LOBYTE(v135[0]) = 0;
        if ( v134.m128i_i64[1] > 0xFuLL )
          std::_Deallocate<16>(v133[0], (struct std::nothrow_t *)(v134.m128i_i64[1] + 1));
        v134 = si128;
        LOBYTE(v133[0]) = 0;
        if ( v132.m128i_i64[1] > 0xFuLL )
          std::_Deallocate<16>(v131[0], (struct std::nothrow_t *)(v132.m128i_i64[1] + 1));
        v132 = si128;
        LOBYTE(v131[0]) = 0;
        if ( v130.m128i_i64[1] > 0xFuLL )
          std::_Deallocate<16>(v129[0], (struct std::nothrow_t *)(v130.m128i_i64[1] + 1));
        v130 = si128;
        LOBYTE(v129[0]) = 0;
        v61 = v142;
        if ( v142 > 0xF )
          std::_Deallocate<16>(v141[0], (struct std::nothrow_t *)(v142 + 1));
        LampArrayTelemetry::GetInstance(v59, v61, v60);
        LampArrayTelemetry::LogLampArrayHidReportFailure(
          v62,
          (__int64)v123,
          2147942487LL,
          (__int64)this + 24,
          *((_WORD *)this + 269),
          *((_WORD *)this + 270),
          *((_WORD *)this + 271));
        v63 = 934LL;
      }
      else
      {
        v65 = *(unsigned __int8 *)(v45 + 704);
        if ( (_DWORD)v65 != *(_DWORD *)(v47 + 256)
          || (v48 = v65 == *(_QWORD *)(*((_QWORD *)this + 78) + 344LL), v66 = 0, !v48) )
        {
          v66 = 1;
        }
        if ( v66 )
        {
          v67 = std::to_string(v141, *(_QWORD *)(*((_QWORD *)this + 78) + 344LL));
          v68 = std::to_string(v129, *(unsigned int *)(*((_QWORD *)this + 77) + 256LL));
          v69 = std::to_string(v131, *(_QWORD *)(*((_QWORD *)this + 76) + 704LL));
          v70 = std::string::string(v133, "GreenChannel logical max is not the same across reports.");
          v71 = std::operator+<char>((__int64)v135, v70, " LampAttributesResponse:");
          v72 = (_QWORD *)std::operator+<char>((__int64)v137, v71, v69);
          v73 = std::operator+<char>((__int64)v139, v72, ", LampMultiUpdate:");
          v74 = (_QWORD *)std::operator+<char>((__int64)v127, v73, v68);
          v75 = std::operator+<char>((__int64)v125, v74, ", LampRangeUpdate:");
          std::operator+<char>((__int64)v123, v75, v67);
          if ( v126.m128i_i64[1] > 0xFuLL )
            std::_Deallocate<16>(v125[0], (struct std::nothrow_t *)(v126.m128i_i64[1] + 1));
          v126 = si128;
          LOBYTE(v125[0]) = 0;
          if ( v128.m128i_i64[1] > 0xFuLL )
            std::_Deallocate<16>(v127[0], (struct std::nothrow_t *)(v128.m128i_i64[1] + 1));
          v128 = si128;
          LOBYTE(v127[0]) = 0;
          if ( v140.m128i_i64[1] > 0xFuLL )
            std::_Deallocate<16>(v139[0], (struct std::nothrow_t *)(v140.m128i_i64[1] + 1));
          v140 = si128;
          LOBYTE(v139[0]) = 0;
          if ( v138.m128i_i64[1] > 0xFuLL )
            std::_Deallocate<16>(v137[0], (struct std::nothrow_t *)(v138.m128i_i64[1] + 1));
          v138 = si128;
          LOBYTE(v137[0]) = 0;
          if ( v136.m128i_i64[1] > 0xFuLL )
            std::_Deallocate<16>(v135[0], (struct std::nothrow_t *)(v136.m128i_i64[1] + 1));
          v136 = si128;
          LOBYTE(v135[0]) = 0;
          if ( v134.m128i_i64[1] > 0xFuLL )
            std::_Deallocate<16>(v133[0], (struct std::nothrow_t *)(v134.m128i_i64[1] + 1));
          v134 = si128;
          LOBYTE(v133[0]) = 0;
          if ( v132.m128i_i64[1] > 0xFuLL )
            std::_Deallocate<16>(v131[0], (struct std::nothrow_t *)(v132.m128i_i64[1] + 1));
          v132 = si128;
          LOBYTE(v131[0]) = 0;
          if ( v130.m128i_i64[1] > 0xFuLL )
            std::_Deallocate<16>(v129[0], (struct std::nothrow_t *)(v130.m128i_i64[1] + 1));
          v130 = si128;
          LOBYTE(v129[0]) = 0;
          v78 = v142;
          if ( v142 > 0xF )
            std::_Deallocate<16>(v141[0], (struct std::nothrow_t *)(v142 + 1));
          LampArrayTelemetry::GetInstance(v76, v78, v77);
          LampArrayTelemetry::LogLampArrayHidReportFailure(
            v79,
            (__int64)v123,
            2147942487LL,
            (__int64)this + 24,
            *((_WORD *)this + 269),
            *((_WORD *)this + 270),
            *((_WORD *)this + 271));
          v63 = 957LL;
        }
        else
        {
          v80 = *(unsigned __int8 *)(v45 + 776);
          if ( (_DWORD)v80 == *(_DWORD *)(v47 + 288) && v80 == *(_QWORD *)(*((_QWORD *)this + 78) + 416LL) )
            v13 = 0;
          if ( v13 )
          {
            v81 = std::to_string(v141, *(_QWORD *)(*((_QWORD *)this + 78) + 416LL));
            v82 = std::to_string(v129, *(unsigned int *)(*((_QWORD *)this + 77) + 288LL));
            v83 = std::to_string(v131, *(_QWORD *)(*((_QWORD *)this + 76) + 776LL));
            v84 = std::string::string(v133, "BlueChannel logical max is not the same across reports.");
            v85 = std::operator+<char>((__int64)v135, v84, " LampAttributesResponse:");
            v86 = (_QWORD *)std::operator+<char>((__int64)v137, v85, v83);
            v87 = std::operator+<char>((__int64)v139, v86, ", LampMultiUpdate:");
            v88 = (_QWORD *)std::operator+<char>((__int64)v127, v87, v82);
            v89 = std::operator+<char>((__int64)v125, v88, ", LampRangeUpdate:");
            std::operator+<char>((__int64)v123, v89, v81);
            if ( v126.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v125[0], (struct std::nothrow_t *)(v126.m128i_i64[1] + 1));
            v126 = si128;
            LOBYTE(v125[0]) = 0;
            if ( v128.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v127[0], (struct std::nothrow_t *)(v128.m128i_i64[1] + 1));
            v128 = si128;
            LOBYTE(v127[0]) = 0;
            if ( v140.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v139[0], (struct std::nothrow_t *)(v140.m128i_i64[1] + 1));
            v140 = si128;
            LOBYTE(v139[0]) = 0;
            if ( v138.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v137[0], (struct std::nothrow_t *)(v138.m128i_i64[1] + 1));
            v138 = si128;
            LOBYTE(v137[0]) = 0;
            if ( v136.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v135[0], (struct std::nothrow_t *)(v136.m128i_i64[1] + 1));
            v136 = si128;
            LOBYTE(v135[0]) = 0;
            if ( v134.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v133[0], (struct std::nothrow_t *)(v134.m128i_i64[1] + 1));
            v134 = si128;
            LOBYTE(v133[0]) = 0;
            if ( v132.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v131[0], (struct std::nothrow_t *)(v132.m128i_i64[1] + 1));
            v132 = si128;
            LOBYTE(v131[0]) = 0;
            if ( v130.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v129[0], (struct std::nothrow_t *)(v130.m128i_i64[1] + 1));
            v130 = si128;
            LOBYTE(v129[0]) = 0;
            v92 = v142;
            if ( v142 > 0xF )
              std::_Deallocate<16>(v141[0], (struct std::nothrow_t *)(v142 + 1));
            LampArrayTelemetry::GetInstance(v90, v92, v91);
            LampArrayTelemetry::LogLampArrayHidReportFailure(
              v93,
              (__int64)v123,
              2147942487LL,
              (__int64)this + 24,
              *((_WORD *)this + 269),
              *((_WORD *)this + 270),
              *((_WORD *)this + 271));
            v63 = 980LL;
          }
          else
          {
            v94 = *(unsigned __int8 *)(*((_QWORD *)this + 76) + 848LL);
            if ( (_DWORD)v94 == *(_DWORD *)(*((_QWORD *)this + 77) + 320LL)
              && v94 == *(_QWORD *)(*((_QWORD *)this + 78) + 488LL) )
            {
              std::vector<unsigned char>::_Tidy(&v111);
              return 0LL;
            }
            v95 = std::to_string(v141, *(_QWORD *)(*((_QWORD *)this + 78) + 488LL));
            v96 = std::to_string(v129, *(unsigned int *)(*((_QWORD *)this + 77) + 320LL));
            v97 = std::to_string(v131, *(_QWORD *)(*((_QWORD *)this + 76) + 848LL));
            v98 = std::string::string(v133, "GainChannel logical max is not the same across reports.");
            v99 = std::operator+<char>((__int64)v135, v98, " LampAttributesResponse:");
            v100 = (_QWORD *)std::operator+<char>((__int64)v137, v99, v97);
            v101 = std::operator+<char>((__int64)v139, v100, ", LampMultiUpdate:");
            v102 = (_QWORD *)std::operator+<char>((__int64)v127, v101, v96);
            v103 = std::operator+<char>((__int64)v125, v102, ", LampRangeUpdate:");
            std::operator+<char>((__int64)v123, v103, v95);
            if ( v126.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v125[0], (struct std::nothrow_t *)(v126.m128i_i64[1] + 1));
            v126 = si128;
            LOBYTE(v125[0]) = 0;
            if ( v128.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v127[0], (struct std::nothrow_t *)(v128.m128i_i64[1] + 1));
            v128 = si128;
            LOBYTE(v127[0]) = 0;
            if ( v140.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v139[0], (struct std::nothrow_t *)(v140.m128i_i64[1] + 1));
            v140 = si128;
            LOBYTE(v139[0]) = 0;
            if ( v138.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v137[0], (struct std::nothrow_t *)(v138.m128i_i64[1] + 1));
            v138 = si128;
            LOBYTE(v137[0]) = 0;
            if ( v136.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v135[0], (struct std::nothrow_t *)(v136.m128i_i64[1] + 1));
            v136 = si128;
            LOBYTE(v135[0]) = 0;
            if ( v134.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v133[0], (struct std::nothrow_t *)(v134.m128i_i64[1] + 1));
            v134 = si128;
            LOBYTE(v133[0]) = 0;
            if ( v132.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v131[0], (struct std::nothrow_t *)(v132.m128i_i64[1] + 1));
            v132 = si128;
            LOBYTE(v131[0]) = 0;
            if ( v130.m128i_i64[1] > 0xFuLL )
              std::_Deallocate<16>(v129[0], (struct std::nothrow_t *)(v130.m128i_i64[1] + 1));
            v130 = si128;
            LOBYTE(v129[0]) = 0;
            v106 = v142;
            if ( v142 > 0xF )
              std::_Deallocate<16>(v141[0], (struct std::nothrow_t *)(v142 + 1));
            LampArrayTelemetry::GetInstance(v104, v106, v105);
            LampArrayTelemetry::LogLampArrayHidReportFailure(
              v107,
              (__int64)v123,
              2147942487LL,
              (__int64)this + 24,
              *((_WORD *)this + 269),
              *((_WORD *)this + 270),
              *((_WORD *)this + 271));
            v63 = 1003LL;
          }
        }
      }
      v64 = (const char *)v123;
      if ( v124.m128i_i64[1] > 0xFuLL )
        v64 = v123[0];
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v63,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x80070057LL,
        (int)"%hs",
        v64);
      if ( v124.m128i_i64[1] > 0xFuLL )
        std::_Deallocate<16>(v123[0], (struct std::nothrow_t *)(v124.m128i_i64[1] + 1));
      v124 = si128;
      LOBYTE(v123[0]) = 0;
LABEL_61:
      std::vector<unsigned char>::_Tidy(&v111);
      return 2147942487LL;
    }
    v24 = std::to_string(v141, *(_QWORD *)(*(_QWORD *)v119 + 128LL));
    v25 = std::to_string(v125, *(unsigned int *)(*(_QWORD *)v116 + 192LL));
    v26 = std::to_string(v127, *(_QWORD *)(*(_QWORD *)v117 + 56LL));
    v27 = std::to_string(v139, *(_QWORD *)(*(_QWORD *)v120 + 56LL));
    v28 = std::to_string(v137, *(_QWORD *)(*((_QWORD *)this + 73) + 56LL));
    v29 = std::string::string(v135, "LampCount logical max is not the same across reports.");
    v30 = std::operator+<char>((__int64)v133, v29, " LampArrayAttributes:");
    v31 = (_QWORD *)std::operator+<char>((__int64)v131, v30, v28);
    v32 = std::operator+<char>((__int64)v129, v31, ", LampAttributesRequest:");
    v33 = (_QWORD *)std::operator+<char>((__int64)&v153, v32, v27);
    v34 = std::operator+<char>((__int64)&v151, v33, ", LampAttributesResponse:");
    v35 = (_QWORD *)std::operator+<char>((__int64)&v149, v34, v26);
    v36 = std::operator+<char>((__int64)&v147, v35, ", LampMultiUpdate:");
    v37 = (_QWORD *)std::operator+<char>((__int64)&v145, v36, v25);
    v38 = std::operator+<char>((__int64)&v143, v37, ", LampRangeUpdate:");
    std::operator+<char>((__int64)v123, v38, v24);
    if ( v144.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v143, (struct std::nothrow_t *)(v144.m128i_i64[1] + 1));
    v144 = si128;
    LOBYTE(v143) = 0;
    if ( v146.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v145, (struct std::nothrow_t *)(v146.m128i_i64[1] + 1));
    v146 = si128;
    LOBYTE(v145) = 0;
    if ( v148.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v147, (struct std::nothrow_t *)(v148.m128i_i64[1] + 1));
    v148 = si128;
    LOBYTE(v147) = 0;
    if ( v150.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v149, (struct std::nothrow_t *)(v150.m128i_i64[1] + 1));
    v150 = si128;
    LOBYTE(v149) = 0;
    if ( v152.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v151, (struct std::nothrow_t *)(v152.m128i_i64[1] + 1));
    v152 = si128;
    LOBYTE(v151) = 0;
    if ( v154.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v153, (struct std::nothrow_t *)(v154.m128i_i64[1] + 1));
    v154 = si128;
    LOBYTE(v153) = 0;
    if ( v130.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v129[0], (struct std::nothrow_t *)(v130.m128i_i64[1] + 1));
    v130 = si128;
    LOBYTE(v129[0]) = 0;
    if ( v132.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v131[0], (struct std::nothrow_t *)(v132.m128i_i64[1] + 1));
    v132 = si128;
    LOBYTE(v131[0]) = 0;
    if ( v134.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v133[0], (struct std::nothrow_t *)(v134.m128i_i64[1] + 1));
    v134 = si128;
    LOBYTE(v133[0]) = 0;
    if ( v136.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v135[0], (struct std::nothrow_t *)(v136.m128i_i64[1] + 1));
    v136 = si128;
    LOBYTE(v135[0]) = 0;
    if ( v138.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v137[0], (struct std::nothrow_t *)(v138.m128i_i64[1] + 1));
    v138 = si128;
    LOBYTE(v137[0]) = 0;
    if ( v140.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v139[0], (struct std::nothrow_t *)(v140.m128i_i64[1] + 1));
    v140 = si128;
    LOBYTE(v139[0]) = 0;
    if ( v128.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v127[0], (struct std::nothrow_t *)(v128.m128i_i64[1] + 1));
    v128 = si128;
    LOBYTE(v127[0]) = 0;
    if ( v126.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v125[0], (struct std::nothrow_t *)(v126.m128i_i64[1] + 1));
    v126 = si128;
    LOBYTE(v125[0]) = 0;
    v41 = v142;
    if ( v142 > 0xF )
      std::_Deallocate<16>(v141[0], (struct std::nothrow_t *)(v142 + 1));
    LampArrayTelemetry::GetInstance(v39, v41, v40);
    LampArrayTelemetry::LogLampArrayHidReportFailure(
      v42,
      (__int64)v123,
      2147942487LL,
      (__int64)this + 24,
      *((_WORD *)this + 269),
      *((_WORD *)this + 270),
      *((_WORD *)this + 271));
    v43 = (const char *)v123;
    if ( v124.m128i_i64[1] > 0xFuLL )
      v43 = v123[0];
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x38F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"%hs",
      v43);
    if ( v124.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v123[0], (struct std::nothrow_t *)(v124.m128i_i64[1] + 1));
    v124 = si128;
    LOBYTE(v123[0]) = 0;
    std::vector<unsigned char>::_Tidy(&v111);
  }
  else
  {
    LOBYTE(v3) = v2 == 0;
    LODWORD(v108) = v3;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x354,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"One or more ReportParsers are null.  LampArrayAttributes:%d, LampArrayControl:%d, LampAttributesRequest:%d, L"
           "ampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
      v108,
      *((_QWORD *)this + 74) == 0LL,
      *((_QWORD *)this + 75) == 0LL,
      *((_QWORD *)this + 76) == 0LL,
      *((_QWORD *)this + 77) == 0LL,
      *((_QWORD *)this + 78) == 0LL);
  }
  return 2147942487LL;
}
