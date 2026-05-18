/*
 * XREFs of sub_18006FCC0 @ 0x18006FCC0
 * Callers:
 *     sub_180034DD0 @ 0x180034DD0 (sub_180034DD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006FCC0(__int64 a1)
{
  void (__fastcall *v2)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v3)(__int64, _BYTE *, __int64); // rbx
  __int64 v4; // r8
  void (__fastcall *v5)(__int64, _BYTE *, __int64); // rbx
  __int64 v6; // r8
  void (__fastcall *v7)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v8)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v9)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v10; // r8
  void (__fastcall *v11)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v12; // r8
  void (__fastcall *v13)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v14; // r8
  void (__fastcall *v15)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v16)(__int64, _BYTE *, __int64); // rbx
  __int64 v17; // r8
  void (__fastcall *v18)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v19; // r8
  void (__fastcall *v20)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v21)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v22)(__int64, _BYTE *, __int64); // rbx
  __int64 v23; // r8
  void (__fastcall *v24)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v25)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v26)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v27)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v28)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v29)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v30)(__int64, _BYTE *, __int64); // rbx
  __int64 v31; // r8
  void (__fastcall *v32)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v33)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v34)(__int64, _BYTE *, __int64, __int64); // rdi
  __int64 v35; // rbx
  void (__fastcall *v36)(__int64, _BYTE *, __int64, __int64); // rdi
  __int64 v37; // rbx
  void (__fastcall *v38)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v39)(__int64, _BYTE *, __int64, __int64); // rbx
  void (__fastcall *v40)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v41; // r8
  void (__fastcall *v42)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v43; // r8
  void (__fastcall *v44)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v45; // r8
  void (__fastcall *v46)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v47; // r8
  void (__fastcall *v48)(__int64, _BYTE *, __int64); // rbx
  __int64 v49; // r8
  void (__fastcall *v50)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v51; // r8
  void (__fastcall *v52)(__int64, _BYTE *, __int64); // rbx
  __int64 v53; // r8
  void (__fastcall *v54)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v55; // r8
  void (__fastcall *v56)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v57)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v58)(__int64, _BYTE *, __int64); // rbx
  __int64 v59; // r8
  void (__fastcall *v60)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v61; // r8
  void (__fastcall *v62)(__int64, _BYTE *, __int64); // rbx
  __int64 v63; // r8
  void (__fastcall *v64)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v65; // r8
  void (__fastcall *v66)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v67)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v68)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v69)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v70; // r8
  void (__fastcall *v71)(__int64, _BYTE *, __int64); // rbx
  __int64 v72; // r8
  void (__fastcall *v73)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v74; // r8
  void (__fastcall *v75)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v76)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v77)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v78)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v79)(__int64, _BYTE *, __int64); // rbx
  __int64 v80; // r8
  void (__fastcall *v81)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v82; // r8
  void (__fastcall *v83)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v84; // r8
  void (__fastcall *v85)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v86; // r8
  void (__fastcall *v87)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v88)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v89)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v90)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v91; // r8
  void (__fastcall *v92)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v93; // r8
  void (__fastcall *v94)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v95; // r8
  void (__fastcall *v96)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v97; // r8
  void (__fastcall *v98)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v99)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v100; // r8
  void (__fastcall *v101)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v102)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v103)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v104; // r8
  void (__fastcall *v105)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v106; // r8
  void (__fastcall *v107)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v108)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v109; // r8
  void (__fastcall *v110)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v111; // r8
  void (__fastcall *v112)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v113; // r8
  void (__fastcall *v114)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v115; // r8
  void (__fastcall *v116)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v117)(__int64, _BYTE *, __int64, __int64); // rbx
  void (__fastcall *v118)(__int64, _BYTE *, __int64); // rbx
  __int64 v119; // r8
  void (__fastcall *v120)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v121)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v122)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v123)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v124)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v125)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v126)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v127)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v128)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v129)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v130)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v131)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v132)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v133)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v134)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v135)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v136)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v137)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v138)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v139)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v140)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v141)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v142)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v143)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v144)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v145)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v146)(__int64, _BYTE *, __int64); // rbx
  __int64 v147; // r8
  void (__fastcall *v148)(__int64, _BYTE *, __int64); // rbx
  __int64 v149; // r8
  void (__fastcall *v150)(__int64, _BYTE *, __int64); // rbx
  __int64 v151; // r8
  void (__fastcall *v152)(__int64, _BYTE *, __int64); // rbx
  __int64 v153; // r8
  void (__fastcall *v154)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v155)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v156)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v157)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v158)(__int64, _BYTE *, __int64); // rbx
  __int64 v159; // r8
  void (__fastcall *v160)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v161)(__int64, _BYTE *, __int64); // rbx
  __int64 v162; // r8
  void (__fastcall *v163)(__int64, _BYTE *, __int64); // rbx
  __int64 v164; // r8
  void (__fastcall *v165)(__int64, _BYTE *, __int64); // rbx
  __int64 v166; // r8
  void (__fastcall *v167)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v168; // r8
  void (__fastcall *v169)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v170; // r8
  void (__fastcall *v171)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v172)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v173)(__int64, _BYTE *, __int64); // rbx
  __int64 v174; // r8
  void (__fastcall *v175)(__int64, _BYTE *, __int64); // rbx
  __int64 v176; // r8
  void (__fastcall *v177)(__int64, _BYTE *, __int64); // rbx
  __int64 v178; // r8
  void (__fastcall *v179)(__int64, _BYTE *, __int64); // rbx
  __int64 v180; // r8
  void (__fastcall *v181)(__int64, _BYTE *, __int64); // rbx
  __int64 v182; // r8
  void (__fastcall *v183)(__int64, _BYTE *, __int64); // rbx
  __int64 v184; // r8
  void (__fastcall *v185)(__int64, _BYTE *, __int64); // rbx
  __int64 v186; // r8
  void (__fastcall *v187)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v188)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v189)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v190)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v191; // r8
  void (__fastcall *v192)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v193; // r8
  void (__fastcall *v194)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v195)(__int64, _BYTE *, __int64); // rbx
  __int64 v196; // r8
  void (__fastcall *v197)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v198; // r8
  void (__fastcall *v199)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v200; // r8
  void (__fastcall *v201)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v202; // r8
  void (__fastcall *v203)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v204; // r8
  void (__fastcall *v205)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v206; // r8
  void (__fastcall *v207)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v208; // r8
  void (__fastcall *v209)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v210; // r8
  void (__fastcall *v211)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v212; // r8
  void (__fastcall *v213)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v214; // r8
  void (__fastcall *v215)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v216; // r8
  void (__fastcall *v217)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v218; // r8
  void (__fastcall *v219)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v220; // r8
  void (__fastcall *v221)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v222; // r8
  void (__fastcall *v223)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v224; // r8
  void (__fastcall *v225)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v226; // r8
  void (__fastcall *v227)(__int64, _BYTE *, __int64, __int64); // rdi
  __int64 v228; // rbx
  void (__fastcall *v229)(__int64, _BYTE *, __int64, __int64); // rdi
  __int64 v230; // rbx
  void (__fastcall *v231)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v232; // r8
  void (__fastcall *v233)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v234; // r8
  void (__fastcall *v235)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v236; // r8
  void (__fastcall *v237)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v238; // r8
  void (__fastcall *v239)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v240; // r8
  void (__fastcall *v241)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v242; // r8
  void (__fastcall *v243)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v244; // r8
  void (__fastcall *v245)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v246; // r8
  void (__fastcall *v247)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v248; // r8
  void (__fastcall *v249)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v250; // r8
  void (__fastcall *v251)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v252; // r8
  void (__fastcall *v253)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v254; // r8
  void (__fastcall *v255)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v256; // r8
  void (__fastcall *v257)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v258; // r8
  void (__fastcall *v259)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v260; // r8
  void (__fastcall *v261)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v262; // r8
  void (__fastcall *v263)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v264; // r8
  void (__fastcall *v265)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v266; // r8
  void (__fastcall *v267)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v268; // r8
  void (__fastcall *v269)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v270; // r8
  void (__fastcall *v271)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v272; // r8
  void (__fastcall *v273)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v274)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v275; // r8
  void (__fastcall *v276)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v277; // r8
  void (__fastcall *v278)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v279; // r8
  void (__fastcall *v280)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v281; // r8
  void (__fastcall *v282)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v283; // r8
  void (__fastcall *v284)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v285; // r8
  void (__fastcall *v286)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v287; // r8
  void (__fastcall *v288)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v289; // r8
  void (__fastcall *v290)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v291)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v292; // r8
  void (__fastcall *v293)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v294; // r8
  void (__fastcall *v295)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v296; // r8
  void (__fastcall *v297)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v298; // r8
  void (__fastcall *v299)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v300; // r8
  void (__fastcall *v301)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v302; // r8
  void (__fastcall *v303)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v304; // r8
  void (__fastcall *v305)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v306)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v307; // r8
  void (__fastcall *v308)(__int64, _BYTE *, __int64); // rbx
  __int64 v309; // r8
  void (__fastcall *v310)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v311)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v312; // r8
  void (__fastcall *v313)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v314; // r8
  void (__fastcall *v315)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v316; // r8
  void (__fastcall *v317)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v318; // r8
  void (__fastcall *v319)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v320; // r8
  void (__fastcall *v321)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v322; // r8
  void (__fastcall *v323)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v324; // r8
  void (__fastcall *v325)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v326; // r8
  void (__fastcall *v327)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v328; // r8
  void (__fastcall *v329)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v330; // r8
  void (__fastcall *v331)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v332; // r8
  void (__fastcall *v333)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v334; // r8
  void (__fastcall *v335)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v336; // r8
  void (__fastcall *v337)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v338; // r8
  void (__fastcall *v339)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v340; // r8
  void (__fastcall *v341)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v342; // r8
  void (__fastcall *v343)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v344; // r8
  void (__fastcall *v345)(__int64, _BYTE *, __int64); // rbx
  __int64 v346; // r8
  void (__fastcall *v347)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v348)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v349; // r8
  void (__fastcall *v350)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v351; // r8
  void (__fastcall *v352)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v353; // r8
  void (__fastcall *v354)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v355; // r8
  void (__fastcall *v356)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v357; // r8
  void (__fastcall *v358)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v359; // r8
  void (__fastcall *v360)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v361; // r8
  void (__fastcall *v362)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v363; // r8
  void (__fastcall *v364)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v365; // r8
  void (__fastcall *v366)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v367; // r8
  void (__fastcall *v368)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v369; // r8
  void (__fastcall *v370)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v371; // r8
  void (__fastcall *v372)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v373; // r8
  void (__fastcall *v374)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v375; // r8
  void (__fastcall *v376)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v377; // r8
  void (__fastcall *v378)(__int64, _BYTE *, __int64, __int64); // rdi
  __int64 v379; // rbx
  void (__fastcall *v380)(__int64, _BYTE *, __int64, __int64); // rdi
  __int64 v381; // rbx
  void (__fastcall *v382)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v383; // r8
  void (__fastcall *v384)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v385; // r8
  void (__fastcall *v386)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v387)(__int64, _BYTE *, __int64); // rbx
  __int64 v388; // r8
  void (__fastcall *v389)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v390)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v391; // r8
  void (__fastcall *v392)(__int64, _BYTE *, __int64); // rbx
  __int64 v393; // r8
  void (__fastcall *v394)(__int64, _BYTE *, __int64); // rbx
  __int64 v395; // r8
  void (__fastcall *v396)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v397)(__int64, _BYTE *, __int64); // rbx
  __int64 v398; // r8
  void (__fastcall *v399)(__int64, _BYTE *, __int64); // rbx
  void (__fastcall *v400)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v401; // r8
  void (__fastcall *v402)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v403)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v404; // r8
  void (__fastcall *v405)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v406; // r8
  void (__fastcall *v407)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v408; // r8
  void (__fastcall *v409)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v410; // r8
  void (__fastcall *v411)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v412; // r8
  void (__fastcall *v413)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v414; // r8
  void (__fastcall *v415)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v416; // r8
  void (__fastcall *v417)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v418; // r8
  void (__fastcall *v419)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v420; // r8
  void (__fastcall *v421)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v422; // r8
  void (__fastcall *v423)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v424; // r8
  void (__fastcall *v425)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v426; // r8
  void (__fastcall *v427)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v428; // r8
  void (__fastcall *v429)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v430; // r8
  void (__fastcall *v431)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v432; // r8
  void (__fastcall *v433)(__int64, _BYTE *, __int64); // rbx
  __int64 v434; // r8
  void (__fastcall *v435)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v436; // r8
  void (__fastcall *v437)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v438; // r8
  void (__fastcall *v439)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v440; // r8
  void (__fastcall *v441)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v442; // r8
  void (__fastcall *v443)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v444; // r8
  void (__fastcall *v445)(__int64, _BYTE *, __int64); // rbx
  __int64 v446; // r8
  void (__fastcall *v447)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v448)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v449; // r8
  void (__fastcall *v450)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v451; // r8
  void (__fastcall *v452)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v453)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v454)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v455; // r8
  void (__fastcall *v456)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v457; // r8
  void (__fastcall *v458)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v459; // r8
  void (__fastcall *v460)(__int64, _BYTE *, __int64); // rbx
  __int64 v461; // r8
  void (__fastcall *v462)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v463; // r8
  void (__fastcall *v464)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v465; // r8
  void (__fastcall *v466)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v467)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v468; // r8
  void (__fastcall *v469)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v470; // r8
  void (__fastcall *v471)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v472; // r8
  void (__fastcall *v473)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v474; // r8
  void (__fastcall *v475)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v476; // r8
  void (__fastcall *v477)(__int64, _BYTE *, __int64); // rbx
  __int64 v478; // r8
  void (__fastcall *v479)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v480; // r8
  void (__fastcall *v481)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v482; // r8
  void (__fastcall *v483)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v484; // r8
  void (__fastcall *v485)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v486; // r8
  void (__fastcall *v487)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v488; // r8
  void (__fastcall *v489)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v490; // r8
  void (__fastcall *v491)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v492; // r8
  void (__fastcall *v493)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v494; // r8
  void (__fastcall *v495)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v496)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v497)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v498)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v499; // r8
  void (__fastcall *v500)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v501; // r8
  void (__fastcall *v502)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v503; // r8
  void (__fastcall *v504)(__int64, _BYTE *, __int64); // rbx
  __int64 v505; // r8
  void (__fastcall *v506)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v507; // r8
  void (__fastcall *v508)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v509; // r8
  void (__fastcall *v510)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v511)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v512; // r8
  void (__fastcall *v513)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v514; // r8
  void (__fastcall *v515)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v516; // r8
  void (__fastcall *v517)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v518; // r8
  void (__fastcall *v519)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v520; // r8
  void (__fastcall *v521)(__int64, _BYTE *, __int64); // rbx
  __int64 v522; // r8
  void (__fastcall *v523)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v524; // r8
  void (__fastcall *v525)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v526; // r8
  void (__fastcall *v527)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v528; // r8
  void (__fastcall *v529)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v530; // r8
  void (__fastcall *v531)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v532; // r8
  void (__fastcall *v533)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v534; // r8
  void (__fastcall *v535)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v536; // r8
  void (__fastcall *v537)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v538; // r8
  void (__fastcall *v539)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v540)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v541)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v542)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v543; // r8
  void (__fastcall *v544)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v545; // r8
  void (__fastcall *v546)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v547; // r8
  void (__fastcall *v548)(__int64, _BYTE *, __int64); // rbx
  __int64 v549; // r8
  void (__fastcall *v550)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v551; // r8
  void (__fastcall *v552)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v553; // r8
  void (__fastcall *v554)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v555)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v556; // r8
  void (__fastcall *v557)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v558; // r8
  void (__fastcall *v559)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v560; // r8
  void (__fastcall *v561)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v562; // r8
  void (__fastcall *v563)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v564; // r8
  void (__fastcall *v565)(__int64, _BYTE *, __int64); // rbx
  __int64 v566; // r8
  void (__fastcall *v567)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v568; // r8
  void (__fastcall *v569)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v570; // r8
  void (__fastcall *v571)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v572; // r8
  void (__fastcall *v573)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v574; // r8
  void (__fastcall *v575)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v576; // r8
  void (__fastcall *v577)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v578; // r8
  void (__fastcall *v579)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v580; // r8
  void (__fastcall *v581)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v582; // r8
  void (__fastcall *v583)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v584)(__int64, _BYTE *, __int64); // rbx
  __int64 v585; // r8
  void (__fastcall *v586)(__int64, _BYTE *, __int64); // rbx
  __int64 v587; // r8
  void (__fastcall *v588)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v589; // r8
  void (__fastcall *v590)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v591; // r8
  void (__fastcall *v592)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v593; // r8
  void (__fastcall *v594)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v595; // r8
  void (__fastcall *v596)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v597; // r8
  void (__fastcall *v598)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v599; // r8
  void (__fastcall *v600)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v601; // r8
  void (__fastcall *v602)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v603; // r8
  void (__fastcall *v604)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v605; // r8
  void (__fastcall *v606)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v607; // r8
  void (__fastcall *v608)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v609; // r8
  void (__fastcall *v610)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v611)(__int64, _BYTE *, __int64, __int64); // rbx
  __int64 v612; // r8
  void (__fastcall *v613)(__int64, _BYTE *, _QWORD, __int64); // rbx
  void (__fastcall *v614)(__int64, _BYTE *, _QWORD, __int64); // rbx
  _BYTE v616[32]; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v617[32]; // [rsp+60h] [rbp-41h] BYREF

  v2 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Application.KeyboardDeveloperMode");
  v2(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v3 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Background.EnableBackgroundCube");
  LOBYTE(v4) = 1;
  v3(a1, v617, v4);
  sub_180014244((__int64)v617);
  v5 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Background.ImageProcessing.Enabled");
  LOBYTE(v6) = 1;
  v5(a1, v617, v6);
  sub_180014244((__int64)v617);
  v7 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C(
    (__int64)v617,
    (__int64)L"/Internal/BugWorkaroundOverride.MetalDepthOnlyAlphaToCoverage.ForceWorkaroundOff");
  v7(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v8 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C(
    (__int64)v617,
    (__int64)L"/Internal/BugWorkaroundOverride.MetalIntelIrisDepthPrepass.ForceWorkaroundOff");
  v8(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v9 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Camera.Distance");
  v9(a1, v617, v10, 1LL);
  sub_180014244((__int64)v617);
  v11 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Camera.Elevation (degrees)");
  v11(a1, v617, v12, 1LL);
  sub_180014244((__int64)v617);
  v13 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Camera.Rotation (degrees)");
  v13(a1, v617, v14, 1LL);
  sub_180014244((__int64)v617);
  v15 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/CpuProfiling.DisplayFrameTimings");
  v15(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v16 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/CpuProfiling.Enabled");
  LOBYTE(v17) = 1;
  v16(a1, v617, v17);
  sub_180014244((__int64)v617);
  v18 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Debug.Value");
  v18(a1, v617, v19, 1LL);
  sub_180014244((__int64)v617);
  v20 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/GpuProfiling.DisplayClippingPrimitivesEmitted");
  v20(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v21 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/GpuProfiling.DisplayClippingPrimitivesInvoked");
  v21(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v22 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/GpuProfiling.DisplayDetailFrameTimings");
  LOBYTE(v23) = 1;
  v22(a1, v617, v23);
  sub_180014244((__int64)v617);
  v24 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/GpuProfiling.DisplayFrameTimings");
  v24(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v25 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/GpuProfiling.DisplayPixelShaderInvocations");
  v25(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v26 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/GpuProfiling.DisplaySceneTiming");
  v26(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v27 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/GpuProfiling.DisplaySubmittedPrimitives");
  v27(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v28 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/GpuProfiling.DisplaySubmittedVertices");
  v28(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v29 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/GpuProfiling.DisplayVertexShaderInvocations");
  v29(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v30 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/GpuProfiling.Enabled");
  LOBYTE(v31) = 1;
  v30(a1, v617, v31);
  sub_180014244((__int64)v617);
  v32 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/GpuProfiling.HighFidelity");
  v32(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v33 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/ImageProcessing.BloomBlurBlendMode");
  v33(a1, v617, 14LL);
  sub_180014244((__int64)v617);
  v34 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 176LL);
  v35 = sub_18001E58C((__int64)v616, (__int64)L"MainCamera");
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/ImageProcessing.PlanarReflectionCameraComponentName");
  v34(a1, v617, v35, 1LL);
  sub_180014244((__int64)v617);
  v36 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 176LL);
  v37 = sub_18001E58C((__int64)v616, (__int64)L"PlanarReflection");
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/ImageProcessing.PlanarReflectionPlaneNodeName");
  v36(a1, v617, v37, 1LL);
  sub_180014244((__int64)v617);
  v38 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Input.CaptureInput");
  v38(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v39 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Input.DepthStencilEvictionWindowInMs");
  v39(a1, v617, 60000LL, 1LL);
  sub_180014244((__int64)v617);
  v40 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.EnvironmentDisplay");
  v40(a1, v617, v41, 1LL);
  sub_180014244((__int64)v617);
  v42 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.EnvironmentDisplayLOD");
  v42(a1, v617, v43, 1LL);
  sub_180014244((__int64)v617);
  v44 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.EnvironmentFilterOffset");
  v44(a1, v617, v45, 1LL);
  sub_180014244((__int64)v617);
  v46 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.EnvironmentFilterScale");
  v46(a1, v617, v47, 1LL);
  sub_180014244((__int64)v617);
  v48 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light0_CalculateNearFarClipEnabled");
  LOBYTE(v49) = 1;
  v48(a1, v617, v49);
  sub_180014244((__int64)v617);
  v50 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light0_ShadowBias");
  v50(a1, v617, v51, 1LL);
  sub_180014244((__int64)v617);
  v52 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light0_ShadowBlurEnabled");
  LOBYTE(v53) = 1;
  v52(a1, v617, v53);
  sub_180014244((__int64)v617);
  v54 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light0_ShadowJitterFactor");
  v54(a1, v617, v55, 1LL);
  sub_180014244((__int64)v617);
  v56 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light0_ShadowTechnique");
  v56(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v57 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light0_ShadowTechniqueCSSMFormat");
  v57(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v58 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light1_CalculateNearFarClipEnabled");
  LOBYTE(v59) = 1;
  v58(a1, v617, v59);
  sub_180014244((__int64)v617);
  v60 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light1_ShadowBias");
  v60(a1, v617, v61, 1LL);
  sub_180014244((__int64)v617);
  v62 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light1_ShadowBlurEnabled");
  LOBYTE(v63) = 1;
  v62(a1, v617, v63);
  sub_180014244((__int64)v617);
  v64 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light1_ShadowJitterFactor");
  v64(a1, v617, v65, 1LL);
  sub_180014244((__int64)v617);
  v66 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light1_ShadowTechnique");
  v66(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v67 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light1_ShadowTechniqueCSSMFormat");
  v67(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v68 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light2_CalculateNearFarClipEnabled");
  v68(a1, v617, 1LL);
  sub_180014244((__int64)v617);
  v69 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light2_ShadowBias");
  v69(a1, v617, v70, 1LL);
  sub_180014244((__int64)v617);
  v71 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light2_ShadowBlurEnabled");
  LOBYTE(v72) = 1;
  v71(a1, v617, v72);
  sub_180014244((__int64)v617);
  v73 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light2_ShadowJitterFactor");
  v73(a1, v617, v74, 1LL);
  sub_180014244((__int64)v617);
  v75 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light2_ShadowTechnique");
  v75(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v76 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.Light2_ShadowTechniqueCSSMFormat");
  v76(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v77 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.ShadowZDirection");
  v77(a1, v617, 1LL);
  sub_180014244((__int64)v617);
  v78 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.ReceiverSlopePlaneBiasEnabled");
  v78(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v79 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.ShadowBiasingMasterToggle");
  LOBYTE(v80) = 1;
  v79(a1, v617, v80);
  sub_180014244((__int64)v617);
  v81 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.ShadowBufferCreationDepthBias");
  v81(a1, v617, v82, 1LL);
  sub_180014244((__int64)v617);
  v83 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.ShadowBufferCreationDepthBiasClamp");
  v83(a1, v617, v84, 1LL);
  sub_180014244((__int64)v617);
  v85 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Lighting.ShadowBufferCreationSlopedDepthBias");
  v85(a1, v617, v86, 1LL);
  sub_180014244((__int64)v617);
  v87 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Loading.EnableAnimationLoading");
  v87(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v88 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Loading.ForceMinecraftBlendMaterialsToMask");
  v88(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v89 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Loading.ForceTranscoding");
  v89(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v90 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.DiffuseColorH");
  v90(a1, v617, v91, 1LL);
  sub_180014244((__int64)v617);
  v92 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.DiffuseColorS");
  v92(a1, v617, v93, 1LL);
  sub_180014244((__int64)v617);
  v94 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.DiffuseColorV");
  v94(a1, v617, v95, 1LL);
  sub_180014244((__int64)v617);
  v96 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.DiffuseMode");
  v96(a1, v617, v97, 1LL);
  sub_180014244((__int64)v617);
  v98 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.DiffuseOverride");
  v98(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v99 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.Opacity");
  v99(a1, v617, v100, 1LL);
  sub_180014244((__int64)v617);
  v101 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.OpacityFresnel");
  v101(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v102 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.OpacityOverride");
  v102(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v103 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.Smoothness");
  v103(a1, v617, v104, 1LL);
  sub_180014244((__int64)v617);
  v105 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.SmoothnessMode");
  v105(a1, v617, v106, 1LL);
  sub_180014244((__int64)v617);
  v107 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.SmoothnessOverride");
  v107(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v108 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.SpecularColorH");
  v108(a1, v617, v109, 1LL);
  sub_180014244((__int64)v617);
  v110 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.SpecularColorS");
  v110(a1, v617, v111, 1LL);
  sub_180014244((__int64)v617);
  v112 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.SpecularColorV");
  v112(a1, v617, v113, 1LL);
  sub_180014244((__int64)v617);
  v114 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.SpecularMode");
  v114(a1, v617, v115, 1LL);
  sub_180014244((__int64)v617);
  v116 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/MaterialOverride.SpecularOverride");
  v116(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v117 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Metal.PsoEvictionWindowInMs");
  v117(a1, v617, 60000LL, 1LL);
  sub_180014244((__int64)v617);
  v118 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Model.TransformEnabled");
  LOBYTE(v119) = 1;
  v118(a1, v617, v119);
  sub_180014244((__int64)v617);
  v120 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.AlphaCompositingOutputMode");
  v120(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v121 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.Antialiasing");
  v121(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v122 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.BufferFormat.Render");
  v122(a1, v617, 2LL);
  sub_180014244((__int64)v617);
  v123 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.CameraEffect.ColorSwatchMode");
  v123(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v124 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.CameraEffect.DisplayDepth");
  v124(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v125 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.CameraEffect.DisplayDepthGrid");
  v125(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v126 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.Compatibility.SmoothnessMode");
  v126(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v127 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.Compatibility.WorkflowStandard");
  v127(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v128 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.Concurrent");
  v128(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v129 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DisplayPerformanceStats");
  v129(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v130 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DisplaySymbols");
  v130(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v131 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DisplaySymbolsBound");
  v131(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v132 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DisplaySymbolsCamera");
  v132(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v133 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DisplaySymbolsLight");
  v133(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v134 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DisplaySymbolsMesh");
  v134(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v135 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DisplaySymbolsNode");
  v135(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v136 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DisplaySymbolsNodeScale");
  v136(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v137 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DisplaySymbolsNodeTree");
  v137(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v138 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DisplaySymbolsSkeleton");
  v138(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v139 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DisplaySymbolsAnimBBox");
  v139(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v140 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.DynamicResolutionScalingEnabled");
  v140(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v141 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.FrameLatencyMaximum");
  v141(a1, v617, 1LL);
  sub_180014244((__int64)v617);
  v142 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.GeometryDisplayMode");
  v142(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v143 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.GeometryLOD");
  v143(a1, v617, 2LL);
  sub_180014244((__int64)v617);
  v144 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.GeometryNormalMode");
  v144(a1, v617, 2LL);
  sub_180014244((__int64)v617);
  v145 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.Grid");
  v145(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v146 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.LayerBackground");
  LOBYTE(v147) = 1;
  v146(a1, v617, v147);
  sub_180014244((__int64)v617);
  v148 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.LayerForeground");
  LOBYTE(v149) = 1;
  v148(a1, v617, v149);
  sub_180014244((__int64)v617);
  v150 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.MaterialPrimary");
  LOBYTE(v151) = 1;
  v150(a1, v617, v151);
  sub_180014244((__int64)v617);
  v152 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.MaterialSecondary");
  LOBYTE(v153) = 1;
  v152(a1, v617, v153);
  sub_180014244((__int64)v617);
  v154 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.RenderingModeOverride_Blend");
  v154(a1, v617, 3LL);
  sub_180014244((__int64)v617);
  v155 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.RenderingModeOverride_Mask");
  v155(a1, v617, 1LL);
  sub_180014244((__int64)v617);
  v156 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.RenderingModeOverride_MaskBlend");
  v156(a1, v617, 2LL);
  sub_180014244((__int64)v617);
  v157 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.RenderingModeOverride_Opaque");
  v157(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v158 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.RenderPasses.DepthPrepass");
  LOBYTE(v159) = 1;
  v158(a1, v617, v159);
  sub_180014244((__int64)v617);
  v160 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.RenderPasses.DepthPrepassReadable");
  v160(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v161 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.RenderPasses.Opaque");
  LOBYTE(v162) = 1;
  v161(a1, v617, v162);
  sub_180014244((__int64)v617);
  v163 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.RenderPasses.OpaqueMasked");
  LOBYTE(v164) = 1;
  v163(a1, v617, v164);
  sub_180014244((__int64)v617);
  v165 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.RenderPasses.Transparent");
  LOBYTE(v166) = 1;
  v165(a1, v617, v166);
  sub_180014244((__int64)v617);
  v167 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.ResolutionScalingX");
  v167(a1, v617, v168, 1LL);
  sub_180014244((__int64)v617);
  v169 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.ResolutionScalingY");
  v169(a1, v617, v170, 1LL);
  sub_180014244((__int64)v617);
  v171 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.SyncInterval");
  v171(a1, v617, 2LL);
  sub_180014244((__int64)v617);
  v172 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.TextureLOD");
  v172(a1, v617, 2LL);
  sub_180014244((__int64)v617);
  v173 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.Textures");
  LOBYTE(v174) = 1;
  v173(a1, v617, v174);
  sub_180014244((__int64)v617);
  v175 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.TexturesDiffuse");
  LOBYTE(v176) = 1;
  v175(a1, v617, v176);
  sub_180014244((__int64)v617);
  v177 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.TexturesEmissive");
  LOBYTE(v178) = 1;
  v177(a1, v617, v178);
  sub_180014244((__int64)v617);
  v179 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.TexturesNormal");
  LOBYTE(v180) = 1;
  v179(a1, v617, v180);
  sub_180014244((__int64)v617);
  v181 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.TexturesOcclusion");
  LOBYTE(v182) = 1;
  v181(a1, v617, v182);
  sub_180014244((__int64)v617);
  v183 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.TexturesOpacity");
  LOBYTE(v184) = 1;
  v183(a1, v617, v184);
  sub_180014244((__int64)v617);
  v185 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.TexturesSpecular");
  LOBYTE(v186) = 1;
  v185(a1, v617, v186);
  sub_180014244((__int64)v617);
  v187 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Renderer.Wireframe");
  v187(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v188 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/Shader.DiagnosticsEnabled");
  v188(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v189 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"/Internal/SkinnedAnimation.Behaviour");
  v189(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v190 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.Camera.Contrast");
  v190(a1, v617, v191, 1LL);
  sub_180014244((__int64)v617);
  v192 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.Camera.ExposureValue");
  v192(a1, v617, v193, 1LL);
  sub_180014244((__int64)v617);
  v194 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.Camera.ExposureValueIsBrightness");
  v194(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v195 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.Camera.ToneMappingEnabled");
  LOBYTE(v196) = 1;
  v195(a1, v617, v196);
  sub_180014244((__int64)v617);
  v197 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.ColorFilterDensityGlobal");
  v197(a1, v617, v198, 1LL);
  sub_180014244((__int64)v617);
  v199 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.ColorFilterDensityHighlights");
  v199(a1, v617, v200, 1LL);
  sub_180014244((__int64)v617);
  v201 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.ColorFilterDensityMidtones");
  v201(a1, v617, v202, 1LL);
  sub_180014244((__int64)v617);
  v203 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.ColorFilterDensityShadows");
  v203(a1, v617, v204, 1LL);
  sub_180014244((__int64)v617);
  v205 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.ColorFilterHueGlobal");
  v205(a1, v617, v206, 1LL);
  sub_180014244((__int64)v617);
  v207 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.ColorFilterHueHighlights");
  v207(a1, v617, v208, 1LL);
  sub_180014244((__int64)v617);
  v209 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.ColorFilterHueMidtones");
  v209(a1, v617, v210, 1LL);
  sub_180014244((__int64)v617);
  v211 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.ColorFilterHueShadows");
  v211(a1, v617, v212, 1LL);
  sub_180014244((__int64)v617);
  v213 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.ExposureHighlights");
  v213(a1, v617, v214, 1LL);
  sub_180014244((__int64)v617);
  v215 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.ExposureMidtones");
  v215(a1, v617, v216, 1LL);
  sub_180014244((__int64)v617);
  v217 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.ExposureShadows");
  v217(a1, v617, v218, 1LL);
  sub_180014244((__int64)v617);
  v219 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.SaturationGlobal");
  v219(a1, v617, v220, 1LL);
  sub_180014244((__int64)v617);
  v221 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.SaturationHighlights");
  v221(a1, v617, v222, 1LL);
  sub_180014244((__int64)v617);
  v223 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.SaturationMidtones");
  v223(a1, v617, v224, 1LL);
  sub_180014244((__int64)v617);
  v225 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.SaturationShadows");
  v225(a1, v617, v226, 1LL);
  sub_180014244((__int64)v617);
  v227 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 176LL);
  v228 = sub_18001E58C((__int64)v616, (__int64)&unk_1800FAA68);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.TransformData");
  v227(a1, v617, v228, 1LL);
  sub_180014244((__int64)v617);
  v229 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 176LL);
  v230 = sub_18001E58C((__int64)v616, (__int64)&unk_1800FAA68);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.TransformDataFormat");
  v229(a1, v617, v230, 1LL);
  sub_180014244((__int64)v617);
  v231 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ColorGrading.TransformWeight");
  v231(a1, v617, v232, 1LL);
  sub_180014244((__int64)v617);
  v233 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientOriginColorA");
  v233(a1, v617, v234, 1LL);
  sub_180014244((__int64)v617);
  v235 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientOriginColorB");
  v235(a1, v617, v236, 1LL);
  sub_180014244((__int64)v617);
  v237 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientOriginColorG");
  v237(a1, v617, v238, 1LL);
  sub_180014244((__int64)v617);
  v239 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientOriginColorR");
  v239(a1, v617, v240, 1LL);
  sub_180014244((__int64)v617);
  v241 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing1ColorA");
  v241(a1, v617, v242, 1LL);
  sub_180014244((__int64)v617);
  v243 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing1ColorB");
  v243(a1, v617, v244, 1LL);
  sub_180014244((__int64)v617);
  v245 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing1ColorG");
  v245(a1, v617, v246, 1LL);
  sub_180014244((__int64)v617);
  v247 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing1ColorR");
  v247(a1, v617, v248, 1LL);
  sub_180014244((__int64)v617);
  v249 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing1Width");
  v249(a1, v617, v250, 1LL);
  sub_180014244((__int64)v617);
  v251 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing2ColorA");
  v251(a1, v617, v252, 1LL);
  sub_180014244((__int64)v617);
  v253 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing2ColorB");
  v253(a1, v617, v254, 1LL);
  sub_180014244((__int64)v617);
  v255 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing2ColorG");
  v255(a1, v617, v256, 1LL);
  sub_180014244((__int64)v617);
  v257 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing2ColorR");
  v257(a1, v617, v258, 1LL);
  sub_180014244((__int64)v617);
  v259 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing2Width");
  v259(a1, v617, v260, 1LL);
  sub_180014244((__int64)v617);
  v261 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing3ColorA");
  v261(a1, v617, v262, 1LL);
  sub_180014244((__int64)v617);
  v263 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing3ColorB");
  v263(a1, v617, v264, 1LL);
  sub_180014244((__int64)v617);
  v265 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing3ColorG");
  v265(a1, v617, v266, 1LL);
  sub_180014244((__int64)v617);
  v267 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing3ColorR");
  v267(a1, v617, v268, 1LL);
  sub_180014244((__int64)v617);
  v269 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.GradientRing3Width");
  v269(a1, v617, v270, 1LL);
  sub_180014244((__int64)v617);
  v271 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.GroundPlane.ShadowWeight");
  v271(a1, v617, v272, 1LL);
  sub_180014244((__int64)v617);
  v273 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ImageProcessing.VignetteBlendMode");
  v273(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v274 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ImageProcessing.VignetteCentreX");
  v274(a1, v617, v275, 1LL);
  sub_180014244((__int64)v617);
  v276 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ImageProcessing.VignetteCentreY");
  v276(a1, v617, v277, 1LL);
  sub_180014244((__int64)v617);
  v278 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ImageProcessing.VignetteColorA");
  v278(a1, v617, v279, 1LL);
  sub_180014244((__int64)v617);
  v280 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ImageProcessing.VignetteColorB");
  v280(a1, v617, v281, 1LL);
  sub_180014244((__int64)v617);
  v282 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ImageProcessing.VignetteColorG");
  v282(a1, v617, v283, 1LL);
  sub_180014244((__int64)v617);
  v284 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ImageProcessing.VignetteColorR");
  v284(a1, v617, v285, 1LL);
  sub_180014244((__int64)v617);
  v286 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ImageProcessing.VignetteStretch");
  v286(a1, v617, v287, 1LL);
  sub_180014244((__int64)v617);
  v288 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Background.ImageProcessing.VignetteWeight");
  v288(a1, v617, v289, 1LL);
  sub_180014244((__int64)v617);
  v290 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.Behaviour");
  v290(a1, v617, 1LL);
  sub_180014244((__int64)v617);
  v291 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.Contrast");
  v291(a1, v617, v292, 1LL);
  sub_180014244((__int64)v617);
  v293 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.DefaultElevation");
  v293(a1, v617, v294, 1LL);
  sub_180014244((__int64)v617);
  v295 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.ElevationLowerLimit (degrees)");
  v295(a1, v617, v296, 1LL);
  sub_180014244((__int64)v617);
  v297 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.ElevationReturnTime (s)");
  v297(a1, v617, v298, 1LL);
  sub_180014244((__int64)v617);
  v299 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.ElevationReturnWaitTime (s)");
  v299(a1, v617, v300, 1LL);
  sub_180014244((__int64)v617);
  v301 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.ElevationUpperLimit (degrees)");
  v301(a1, v617, v302, 1LL);
  sub_180014244((__int64)v617);
  v303 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.ExposureValue");
  v303(a1, v617, v304, 1LL);
  sub_180014244((__int64)v617);
  v305 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.ExposureValueIsBrightness");
  v305(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v306 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.FieldOfView (Degrees)");
  v306(a1, v617, v307, 1LL);
  sub_180014244((__int64)v617);
  v308 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.FrameOnModelLoad");
  LOBYTE(v309) = 1;
  v308(a1, v617, v309);
  sub_180014244((__int64)v617);
  v310 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.FramingBehaviour");
  v310(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v311 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.FramingElevation");
  v311(a1, v617, v312, 1LL);
  sub_180014244((__int64)v617);
  v313 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.FramingPositionY");
  v313(a1, v617, v314, 1LL);
  sub_180014244((__int64)v617);
  v315 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.FramingRadius");
  v315(a1, v617, v316, 1LL);
  sub_180014244((__int64)v617);
  v317 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.FramingRotation");
  v317(a1, v617, v318, 1LL);
  sub_180014244((__int64)v617);
  v319 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.FramingTime");
  v319(a1, v617, v320, 1LL);
  sub_180014244((__int64)v617);
  v321 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.IdleRotationSpeed (degrees/s)");
  v321(a1, v617, v322, 1LL);
  sub_180014244((__int64)v617);
  v323 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.IdleRotationSpinupTime (s)");
  v323(a1, v617, v324, 1LL);
  sub_180014244((__int64)v617);
  v325 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.IdleRotationWaitTime (s)");
  v325(a1, v617, v326, 1LL);
  sub_180014244((__int64)v617);
  v327 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.MaxDistance");
  v327(a1, v617, v328, 1LL);
  sub_180014244((__int64)v617);
  v329 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.MinDistance");
  v329(a1, v617, v330, 1LL);
  sub_180014244((__int64)v617);
  v331 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.State.Position.X");
  v331(a1, v617, v332, 1LL);
  sub_180014244((__int64)v617);
  v333 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.State.Position.Y");
  v333(a1, v617, v334, 1LL);
  sub_180014244((__int64)v617);
  v335 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.State.Position.Z");
  v335(a1, v617, v336, 1LL);
  sub_180014244((__int64)v617);
  v337 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.State.Rotation.W");
  v337(a1, v617, v338, 1LL);
  sub_180014244((__int64)v617);
  v339 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.State.Rotation.X");
  v339(a1, v617, v340, 1LL);
  sub_180014244((__int64)v617);
  v341 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.State.Rotation.Y");
  v341(a1, v617, v342, 1LL);
  sub_180014244((__int64)v617);
  v343 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.State.Rotation.Z");
  v343(a1, v617, v344, 1LL);
  sub_180014244((__int64)v617);
  v345 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.ToneMappingEnabled");
  LOBYTE(v346) = 1;
  v345(a1, v617, v346);
  sub_180014244((__int64)v617);
  v347 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Camera.ZoomStopsAnimation");
  v347(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v348 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.ColorFilterDensityGlobal");
  v348(a1, v617, v349, 1LL);
  sub_180014244((__int64)v617);
  v350 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.ColorFilterDensityHighlights");
  v350(a1, v617, v351, 1LL);
  sub_180014244((__int64)v617);
  v352 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.ColorFilterDensityMidtones");
  v352(a1, v617, v353, 1LL);
  sub_180014244((__int64)v617);
  v354 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.ColorFilterDensityShadows");
  v354(a1, v617, v355, 1LL);
  sub_180014244((__int64)v617);
  v356 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.ColorFilterHueGlobal");
  v356(a1, v617, v357, 1LL);
  sub_180014244((__int64)v617);
  v358 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.ColorFilterHueHighlights");
  v358(a1, v617, v359, 1LL);
  sub_180014244((__int64)v617);
  v360 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.ColorFilterHueMidtones");
  v360(a1, v617, v361, 1LL);
  sub_180014244((__int64)v617);
  v362 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.ColorFilterHueShadows");
  v362(a1, v617, v363, 1LL);
  sub_180014244((__int64)v617);
  v364 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.ExposureHighlights");
  v364(a1, v617, v365, 1LL);
  sub_180014244((__int64)v617);
  v366 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.ExposureMidtones");
  v366(a1, v617, v367, 1LL);
  sub_180014244((__int64)v617);
  v368 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.ExposureShadows");
  v368(a1, v617, v369, 1LL);
  sub_180014244((__int64)v617);
  v370 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.SaturationGlobal");
  v370(a1, v617, v371, 1LL);
  sub_180014244((__int64)v617);
  v372 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.SaturationHighlights");
  v372(a1, v617, v373, 1LL);
  sub_180014244((__int64)v617);
  v374 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.SaturationMidtones");
  v374(a1, v617, v375, 1LL);
  sub_180014244((__int64)v617);
  v376 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.SaturationShadows");
  v376(a1, v617, v377, 1LL);
  sub_180014244((__int64)v617);
  v378 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 176LL);
  v379 = sub_18001E58C((__int64)v616, (__int64)&unk_1800FAA68);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.TransformData");
  v378(a1, v617, v379, 1LL);
  sub_180014244((__int64)v617);
  v380 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 176LL);
  v381 = sub_18001E58C((__int64)v616, (__int64)&unk_1800FAA68);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.TransformDataFormat");
  v380(a1, v617, v381, 1LL);
  sub_180014244((__int64)v617);
  v382 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ColorGrading.TransformWeight");
  v382(a1, v617, v383, 1LL);
  sub_180014244((__int64)v617);
  v384 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"GroundPlane.BottomGridOpacity");
  v384(a1, v617, v385, 1LL);
  sub_180014244((__int64)v617);
  v386 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"GroundPlane.BottomVisible");
  v386(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v387 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.BloomEnabled");
  LOBYTE(v388) = 1;
  v387(a1, v617, v388);
  sub_180014244((__int64)v617);
  v389 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.BloomQuality");
  v389(a1, v617, 2LL);
  sub_180014244((__int64)v617);
  v390 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.BloomWeight");
  v390(a1, v617, v391, 1LL);
  sub_180014244((__int64)v617);
  v392 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.Enabled");
  LOBYTE(v393) = 1;
  v392(a1, v617, v393);
  sub_180014244((__int64)v617);
  v394 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.PlanarReflectionBlur");
  LOBYTE(v395) = 1;
  v394(a1, v617, v395);
  sub_180014244((__int64)v617);
  v396 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.PlanarReflectionDirect");
  v396(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v397 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.PlanarReflectionEnabled");
  LOBYTE(v398) = 1;
  v397(a1, v617, v398);
  sub_180014244((__int64)v617);
  v399 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.PlanarReflectionQuality");
  v399(a1, v617, 2LL);
  sub_180014244((__int64)v617);
  v400 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.PlanarReflectionWeight");
  v400(a1, v617, v401, 1LL);
  sub_180014244((__int64)v617);
  v402 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.VignetteBlendMode");
  v402(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v403 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.VignetteCentreX");
  v403(a1, v617, v404, 1LL);
  sub_180014244((__int64)v617);
  v405 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.VignetteCentreY");
  v405(a1, v617, v406, 1LL);
  sub_180014244((__int64)v617);
  v407 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.VignetteColorA");
  v407(a1, v617, v408, 1LL);
  sub_180014244((__int64)v617);
  v409 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.VignetteColorB");
  v409(a1, v617, v410, 1LL);
  sub_180014244((__int64)v617);
  v411 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.VignetteColorG");
  v411(a1, v617, v412, 1LL);
  sub_180014244((__int64)v617);
  v413 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.VignetteColorR");
  v413(a1, v617, v414, 1LL);
  sub_180014244((__int64)v617);
  v415 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.VignetteStretch");
  v415(a1, v617, v416, 1LL);
  sub_180014244((__int64)v617);
  v417 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"ImageProcessing.VignetteWeight");
  v417(a1, v617, v418, 1LL);
  sub_180014244((__int64)v617);
  v419 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.BackgroundColorAmount");
  v419(a1, v617, v420, 1LL);
  sub_180014244((__int64)v617);
  v421 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.BackgroundColorB");
  v421(a1, v617, v422, 1LL);
  sub_180014244((__int64)v617);
  v423 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.BackgroundColorG");
  v423(a1, v617, v424, 1LL);
  sub_180014244((__int64)v617);
  v425 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.BackgroundColorR");
  v425(a1, v617, v426, 1LL);
  sub_180014244((__int64)v617);
  v427 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.BackgroundLighting");
  v427(a1, v617, v428, 1LL);
  sub_180014244((__int64)v617);
  v429 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.BackgroundShadowAmount");
  v429(a1, v617, v430, 1LL);
  sub_180014244((__int64)v617);
  v431 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.BackgroundShadowFalloff");
  v431(a1, v617, v432, 1LL);
  sub_180014244((__int64)v617);
  v433 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.DirectEnabled");
  LOBYTE(v434) = 1;
  v433(a1, v617, v434);
  sub_180014244((__int64)v617);
  v435 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.DirectIntensity");
  v435(a1, v617, v436, 1LL);
  sub_180014244((__int64)v617);
  v437 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.EmissiveIntensity");
  v437(a1, v617, v438, 1LL);
  sub_180014244((__int64)v617);
  v439 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.EnvironmentColorB");
  v439(a1, v617, v440, 1LL);
  sub_180014244((__int64)v617);
  v441 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.EnvironmentColorG");
  v441(a1, v617, v442, 1LL);
  sub_180014244((__int64)v617);
  v443 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.EnvironmentColorR");
  v443(a1, v617, v444, 1LL);
  sub_180014244((__int64)v617);
  v445 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.EnvironmentEnabled");
  LOBYTE(v446) = 1;
  v445(a1, v617, v446);
  sub_180014244((__int64)v617);
  v447 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.EnvironmentIndex");
  v447(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v448 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.EnvironmentIntensity");
  v448(a1, v617, v449, 1LL);
  sub_180014244((__int64)v617);
  v450 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.EnvironmentRotation");
  v450(a1, v617, v451, 1LL);
  sub_180014244((__int64)v617);
  v452 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_CameraOrientationTracking");
  v452(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v453 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_CameraRelative");
  v453(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v454 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_ColorB");
  v454(a1, v617, v455, 1LL);
  sub_180014244((__int64)v617);
  v456 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_ColorG");
  v456(a1, v617, v457, 1LL);
  sub_180014244((__int64)v617);
  v458 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_ColorR");
  v458(a1, v617, v459, 1LL);
  sub_180014244((__int64)v617);
  v460 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_Enabled");
  LOBYTE(v461) = 1;
  v460(a1, v617, v461);
  sub_180014244((__int64)v617);
  v462 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_FrustumEdgeFalloff");
  v462(a1, v617, v463, 1LL);
  sub_180014244((__int64)v617);
  v464 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_Intensity");
  v464(a1, v617, v465, 1LL);
  sub_180014244((__int64)v617);
  v466 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_IntensityMode");
  v466(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v467 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_PositionX");
  v467(a1, v617, v468, 1LL);
  sub_180014244((__int64)v617);
  v469 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_PositionY");
  v469(a1, v617, v470, 1LL);
  sub_180014244((__int64)v617);
  v471 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_PositionZ");
  v471(a1, v617, v472, 1LL);
  sub_180014244((__int64)v617);
  v473 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_Radius");
  v473(a1, v617, v474, 1LL);
  sub_180014244((__int64)v617);
  v475 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_ShadowBufferSize");
  v475(a1, v617, v476, 1LL);
  sub_180014244((__int64)v617);
  v477 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_ShadowEnabled");
  LOBYTE(v478) = 1;
  v477(a1, v617, v478);
  sub_180014244((__int64)v617);
  v479 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_ShadowFarClip");
  v479(a1, v617, v480, 1LL);
  sub_180014244((__int64)v617);
  v481 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_ShadowFieldOfView");
  v481(a1, v617, v482, 1LL);
  sub_180014244((__int64)v617);
  v483 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_ShadowFrustumSize");
  v483(a1, v617, v484, 1LL);
  sub_180014244((__int64)v617);
  v485 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_ShadowNearClip");
  v485(a1, v617, v486, 1LL);
  sub_180014244((__int64)v617);
  v487 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_SpotAngle");
  v487(a1, v617, v488, 1LL);
  sub_180014244((__int64)v617);
  v489 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_TargetX");
  v489(a1, v617, v490, 1LL);
  sub_180014244((__int64)v617);
  v491 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_TargetY");
  v491(a1, v617, v492, 1LL);
  sub_180014244((__int64)v617);
  v493 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_TargetZ");
  v493(a1, v617, v494, 1LL);
  sub_180014244((__int64)v617);
  v495 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light0_Type");
  v495(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v496 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_CameraOrientationTracking");
  v496(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v497 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_CameraRelative");
  v497(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v498 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_ColorB");
  v498(a1, v617, v499, 1LL);
  sub_180014244((__int64)v617);
  v500 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_ColorG");
  v500(a1, v617, v501, 1LL);
  sub_180014244((__int64)v617);
  v502 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_ColorR");
  v502(a1, v617, v503, 1LL);
  sub_180014244((__int64)v617);
  v504 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_Enabled");
  LOBYTE(v505) = 1;
  v504(a1, v617, v505);
  sub_180014244((__int64)v617);
  v506 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_FrustumEdgeFalloff");
  v506(a1, v617, v507, 1LL);
  sub_180014244((__int64)v617);
  v508 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_Intensity");
  v508(a1, v617, v509, 1LL);
  sub_180014244((__int64)v617);
  v510 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_IntensityMode");
  v510(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v511 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_PositionX");
  v511(a1, v617, v512, 1LL);
  sub_180014244((__int64)v617);
  v513 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_PositionY");
  v513(a1, v617, v514, 1LL);
  sub_180014244((__int64)v617);
  v515 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_PositionZ");
  v515(a1, v617, v516, 1LL);
  sub_180014244((__int64)v617);
  v517 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_Radius");
  v517(a1, v617, v518, 1LL);
  sub_180014244((__int64)v617);
  v519 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_ShadowBufferSize");
  v519(a1, v617, v520, 1LL);
  sub_180014244((__int64)v617);
  v521 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_ShadowEnabled");
  LOBYTE(v522) = 1;
  v521(a1, v617, v522);
  sub_180014244((__int64)v617);
  v523 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_ShadowFarClip");
  v523(a1, v617, v524, 1LL);
  sub_180014244((__int64)v617);
  v525 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_ShadowFieldOfView");
  v525(a1, v617, v526, 1LL);
  sub_180014244((__int64)v617);
  v527 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_ShadowFrustumSize");
  v527(a1, v617, v528, 1LL);
  sub_180014244((__int64)v617);
  v529 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_ShadowNearClip");
  v529(a1, v617, v530, 1LL);
  sub_180014244((__int64)v617);
  v531 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_SpotAngle");
  v531(a1, v617, v532, 1LL);
  sub_180014244((__int64)v617);
  v533 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_TargetX");
  v533(a1, v617, v534, 1LL);
  sub_180014244((__int64)v617);
  v535 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_TargetY");
  v535(a1, v617, v536, 1LL);
  sub_180014244((__int64)v617);
  v537 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_TargetZ");
  v537(a1, v617, v538, 1LL);
  sub_180014244((__int64)v617);
  v539 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light1_Type");
  v539(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v540 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_CameraOrientationTracking");
  v540(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v541 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_CameraRelative");
  v541(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v542 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_ColorB");
  v542(a1, v617, v543, 1LL);
  sub_180014244((__int64)v617);
  v544 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_ColorG");
  v544(a1, v617, v545, 1LL);
  sub_180014244((__int64)v617);
  v546 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_ColorR");
  v546(a1, v617, v547, 1LL);
  sub_180014244((__int64)v617);
  v548 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_Enabled");
  LOBYTE(v549) = 1;
  v548(a1, v617, v549);
  sub_180014244((__int64)v617);
  v550 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_FrustumEdgeFalloff");
  v550(a1, v617, v551, 1LL);
  sub_180014244((__int64)v617);
  v552 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_Intensity");
  v552(a1, v617, v553, 1LL);
  sub_180014244((__int64)v617);
  v554 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_IntensityMode");
  v554(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v555 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_PositionX");
  v555(a1, v617, v556, 1LL);
  sub_180014244((__int64)v617);
  v557 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_PositionY");
  v557(a1, v617, v558, 1LL);
  sub_180014244((__int64)v617);
  v559 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_PositionZ");
  v559(a1, v617, v560, 1LL);
  sub_180014244((__int64)v617);
  v561 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_Radius");
  v561(a1, v617, v562, 1LL);
  sub_180014244((__int64)v617);
  v563 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_ShadowBufferSize");
  v563(a1, v617, v564, 1LL);
  sub_180014244((__int64)v617);
  v565 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_ShadowEnabled");
  LOBYTE(v566) = 1;
  v565(a1, v617, v566);
  sub_180014244((__int64)v617);
  v567 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_ShadowFarClip");
  v567(a1, v617, v568, 1LL);
  sub_180014244((__int64)v617);
  v569 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_ShadowFieldOfView");
  v569(a1, v617, v570, 1LL);
  sub_180014244((__int64)v617);
  v571 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_ShadowFrustumSize");
  v571(a1, v617, v572, 1LL);
  sub_180014244((__int64)v617);
  v573 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_ShadowNearClip");
  v573(a1, v617, v574, 1LL);
  sub_180014244((__int64)v617);
  v575 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_SpotAngle");
  v575(a1, v617, v576, 1LL);
  sub_180014244((__int64)v617);
  v577 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_TargetX");
  v577(a1, v617, v578, 1LL);
  sub_180014244((__int64)v617);
  v579 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_TargetY");
  v579(a1, v617, v580, 1LL);
  sub_180014244((__int64)v617);
  v581 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_TargetZ");
  v581(a1, v617, v582, 1LL);
  sub_180014244((__int64)v617);
  v583 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.Light2_Type");
  v583(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v584 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Lighting.MasterEnabled");
  LOBYTE(v585) = 1;
  v584(a1, v617, v585);
  sub_180014244((__int64)v617);
  v586 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Model.PositionAlignBase");
  LOBYTE(v587) = 1;
  v586(a1, v617, v587);
  sub_180014244((__int64)v617);
  v588 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Model.PositionOffsetX");
  v588(a1, v617, v589, 1LL);
  sub_180014244((__int64)v617);
  v590 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Model.PositionOffsetY");
  v590(a1, v617, v591, 1LL);
  sub_180014244((__int64)v617);
  v592 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Model.PositionOffsetZ");
  v592(a1, v617, v593, 1LL);
  sub_180014244((__int64)v617);
  v594 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Model.RelativeModelLoadScale");
  v594(a1, v617, v595, 1LL);
  sub_180014244((__int64)v617);
  v596 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Model.RotationOffsetAngle");
  v596(a1, v617, v597, 1LL);
  sub_180014244((__int64)v617);
  v598 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Model.RotationOffsetAxisX");
  v598(a1, v617, v599, 1LL);
  sub_180014244((__int64)v617);
  v600 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Model.RotationOffsetAxisY");
  v600(a1, v617, v601, 1LL);
  sub_180014244((__int64)v617);
  v602 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Model.RotationOffsetAxisZ");
  v602(a1, v617, v603, 1LL);
  sub_180014244((__int64)v617);
  v604 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Renderer.ClearColorA");
  v604(a1, v617, v605, 1LL);
  sub_180014244((__int64)v617);
  v606 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Renderer.ClearColorB");
  v606(a1, v617, v607, 1LL);
  sub_180014244((__int64)v617);
  v608 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Renderer.ClearColorG");
  v608(a1, v617, v609, 1LL);
  sub_180014244((__int64)v617);
  v610 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Renderer.ClearColorOverride");
  v610(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v611 = *(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  sub_18001E58C((__int64)v617, (__int64)L"Renderer.ClearColorR");
  v611(a1, v617, v612, 1LL);
  sub_180014244((__int64)v617);
  v613 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Renderer.Compatibility.GLTFComplianceEnabled");
  v613(a1, v617, 0LL, 1LL);
  sub_180014244((__int64)v617);
  v614 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  sub_18001E58C((__int64)v617, (__int64)L"Shader.ForceNormalsForward");
  v614(a1, v617, 0LL, 1LL);
  return sub_180014244((__int64)v617);
}
