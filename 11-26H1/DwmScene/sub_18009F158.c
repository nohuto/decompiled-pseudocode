/*
 * XREFs of sub_18009F158 @ 0x18009F158
 * Callers:
 *     sub_180002FD0 @ 0x180002FD0 (sub_180002FD0.c)
 *     sub_180003150 @ 0x180003150 (sub_180003150.c)
 *     sub_1800031C0 @ 0x1800031C0 (sub_1800031C0.c)
 *     sub_180003230 @ 0x180003230 (sub_180003230.c)
 *     sub_1800032A0 @ 0x1800032A0 (sub_1800032A0.c)
 *     sub_180003310 @ 0x180003310 (sub_180003310.c)
 *     sub_180003380 @ 0x180003380 (sub_180003380.c)
 *     sub_1800033F0 @ 0x1800033F0 (sub_1800033F0.c)
 *     sub_180003460 @ 0x180003460 (sub_180003460.c)
 *     sub_1800034D0 @ 0x1800034D0 (sub_1800034D0.c)
 *     sub_180003540 @ 0x180003540 (sub_180003540.c)
 *     sub_1800035B0 @ 0x1800035B0 (sub_1800035B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180011E30 @ 0x180011E30 (sub_180011E30.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 *     sub_180075D94 @ 0x180075D94 (sub_180075D94.c)
 *     sub_18009EAF0 @ 0x18009EAF0 (sub_18009EAF0.c)
 *     __alloca_probe @ 0x1800D7C10 (__alloca_probe.c)
 */

// Hidden C++ exception states: #wind=384
__int64 sub_18009F158()
{
  __int64 v0; // rbx
  _QWORD *ThreadLocalStoragePointer; // rdi
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  _QWORD *v130; // rax
  _QWORD *v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  _QWORD *v134; // rax
  _QWORD *v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  _QWORD *v138; // rax
  _QWORD *v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  _QWORD *v142; // rax
  _QWORD *v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  _QWORD *v146; // rax
  _QWORD *v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  _QWORD *v150; // rax
  _QWORD *v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  _QWORD *v154; // rax
  _QWORD *v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  _QWORD *v158; // rax
  _QWORD *v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  _QWORD *v162; // rax
  _QWORD *v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  _QWORD *v166; // rax
  _QWORD *v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  _QWORD *v170; // rax
  _QWORD *v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  _QWORD *v174; // rax
  _QWORD *v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  _QWORD *v178; // rax
  _QWORD *v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  _QWORD *v182; // rax
  _QWORD *v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  _QWORD *v186; // rax
  _QWORD *v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  _QWORD *v190; // rax
  _QWORD *v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  _QWORD *v194; // rax
  _QWORD *v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  _QWORD *v198; // rax
  _QWORD *v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  _QWORD *v202; // rax
  _QWORD *v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  _QWORD *v206; // rax
  _QWORD *v207; // rax
  __int64 v208; // rax
  __int64 v209; // rax
  _QWORD *v210; // rax
  _QWORD *v211; // rax
  __int64 v212; // rax
  __int64 v213; // rax
  _QWORD *v214; // rax
  _QWORD *v215; // rax
  __int64 v216; // rax
  __int64 v217; // rax
  _QWORD *v218; // rax
  _QWORD *v219; // rax
  __int64 v220; // rax
  __int64 v221; // rax
  _QWORD *v222; // rax
  _QWORD *v223; // rax
  __int64 v224; // rax
  __int64 v225; // rax
  _QWORD *v226; // rax
  _QWORD *v227; // rax
  __int64 v228; // rax
  __int64 v229; // rax
  _QWORD *v230; // rax
  _QWORD *v231; // rax
  __int64 v232; // rax
  __int64 v233; // rax
  _QWORD *v234; // rax
  _QWORD *v235; // rax
  __int64 v236; // rax
  __int64 v237; // rax
  _QWORD *v238; // rax
  _QWORD *v239; // rax
  __int64 v240; // rax
  __int64 v241; // rax
  _QWORD *v242; // rax
  _QWORD *v243; // rax
  __int64 v244; // rax
  __int64 v245; // rax
  _QWORD *v246; // rax
  _QWORD *v247; // rax
  __int64 v248; // rax
  __int64 v249; // rax
  _QWORD *v250; // rax
  _QWORD *v251; // rax
  __int64 v252; // rax
  __int64 v253; // rax
  _QWORD *v254; // rax
  _QWORD *v255; // rax
  __int64 v256; // rax
  __int64 v257; // rax
  _QWORD *v258; // rax
  _QWORD *v259; // rax
  __int64 v260; // rax
  __int64 v261; // rax
  _QWORD *v262; // rax
  _QWORD *v263; // rax
  __int64 v264; // rax
  __int64 v265; // rax
  _QWORD *v266; // rax
  _QWORD *v267; // rax
  __int64 v268; // rax
  __int64 v269; // rax
  _QWORD *v270; // rax
  _QWORD *v271; // rax
  __int64 v272; // rax
  __int64 v273; // rax
  _QWORD *v274; // rax
  _QWORD *v275; // rax
  __int64 v276; // rax
  __int64 v277; // rax
  _QWORD *v278; // rax
  _QWORD *v279; // rax
  __int64 v280; // rax
  __int64 v281; // rax
  _QWORD *v282; // rax
  _QWORD *v283; // rax
  __int64 v284; // rax
  __int64 v285; // rax
  _QWORD *v286; // rax
  _QWORD *v287; // rax
  __int64 v288; // rax
  __int64 v289; // rax
  _QWORD *v290; // rax
  _QWORD *v291; // rax
  __int64 v292; // rax
  __int64 v293; // rax
  _QWORD *v294; // rax
  _QWORD *v295; // rax
  __int64 v296; // rax
  __int64 v297; // rax
  _QWORD *v298; // rax
  _QWORD *v299; // rax
  __int64 v300; // rax
  __int64 v301; // rax
  _QWORD *v302; // rax
  _QWORD *v303; // rax
  __int64 v304; // rax
  __int64 v305; // rax
  _QWORD *v306; // rax
  _QWORD *v307; // rax
  __int64 v308; // rax
  __int64 v309; // rax
  _QWORD *v310; // rax
  _QWORD *v311; // rax
  __int64 v312; // rax
  __int64 v313; // rax
  _QWORD *v314; // rax
  _QWORD *v315; // rax
  __int64 v316; // rax
  __int64 v317; // rax
  _QWORD *v318; // rax
  _QWORD *v319; // rax
  __int64 v320; // rax
  __int64 v321; // rax
  _QWORD *v322; // rax
  _QWORD *v323; // rax
  __int64 v324; // rax
  __int64 v325; // rax
  _QWORD *v326; // rax
  _QWORD *v327; // rax
  __int64 v328; // rax
  __int64 v329; // rax
  _QWORD *v330; // rax
  _QWORD *v331; // rax
  __int64 v332; // rax
  __int64 v333; // rax
  _QWORD *v334; // rax
  _QWORD *v335; // rax
  __int64 v336; // rax
  __int64 v337; // rax
  _QWORD *v338; // rax
  _QWORD *v339; // rax
  __int64 v340; // rax
  __int64 v341; // rax
  _QWORD *v342; // rax
  _QWORD *v343; // rax
  __int64 v344; // rax
  __int64 v345; // rax
  _QWORD *v346; // rax
  _QWORD *v347; // rax
  __int64 v348; // rax
  __int64 v349; // rax
  _QWORD *v350; // rax
  _QWORD *v351; // rax
  __int64 v352; // rax
  __int64 v353; // rax
  _QWORD *v354; // rax
  _QWORD *v355; // rax
  __int64 v356; // rax
  __int64 v357; // rax
  _QWORD *v358; // rax
  _QWORD *v359; // rax
  __int64 v360; // rax
  __int64 v361; // rax
  _QWORD *v362; // rax
  _QWORD *v363; // rax
  __int64 v364; // rax
  __int64 v365; // rax
  _QWORD *v366; // rax
  _QWORD *v367; // rax
  __int64 v368; // rax
  __int64 v369; // rax
  _QWORD *v370; // rax
  _QWORD *v371; // rax
  __int64 v372; // rax
  __int64 v373; // rax
  _QWORD *v374; // rax
  _QWORD *v375; // rax
  __int64 v376; // rax
  __int64 v377; // rax
  _QWORD *v378; // rax
  _QWORD *v379; // rax
  __int64 v380; // rax
  __int64 v381; // rax
  _QWORD *v382; // rax
  _QWORD *v383; // rax
  __int64 v384; // rax
  __int64 v385; // rax
  _QWORD *v386; // rax
  _QWORD *v387; // rax
  __int64 v388; // rax
  __int64 v389; // rax
  _QWORD *v390; // rax
  _QWORD *v391; // rax
  __int64 v392; // rax
  __int64 v393; // rax
  _QWORD *v394; // rax
  _QWORD *v395; // rax
  __int64 v396; // rax
  __int64 v397; // rax
  _QWORD *v398; // rax
  _QWORD *v399; // rax
  __int64 v400; // rax
  __int64 v401; // rax
  _QWORD *v402; // rax
  _QWORD *v403; // rax
  __int64 v404; // rax
  __int64 v405; // rax
  _QWORD *v406; // rax
  _QWORD *v407; // rax
  __int64 v408; // rax
  __int64 v409; // rax
  _QWORD *v410; // rax
  _QWORD *v411; // rax
  __int64 v412; // rax
  __int64 v413; // rax
  _QWORD *v414; // rax
  _QWORD *v415; // rax
  __int64 v416; // rax
  __int64 v417; // rax
  _QWORD *v418; // rax
  _QWORD *v419; // rax
  __int64 v420; // rax
  __int64 v421; // rax
  _QWORD *v422; // rax
  _QWORD *v423; // rax
  __int64 v424; // rax
  __int64 v425; // rax
  _QWORD *v426; // rax
  _QWORD *v427; // rax
  __int64 v428; // rax
  __int64 v429; // rax
  _QWORD *v430; // rax
  _QWORD *v431; // rax
  __int64 v432; // rax
  __int64 v433; // rax
  _QWORD *v434; // rax
  _QWORD *v435; // rax
  __int64 v436; // rax
  __int64 v437; // rax
  _QWORD *v438; // rax
  _QWORD *v439; // rax
  __int64 v440; // rax
  __int64 v441; // rax
  _QWORD *v442; // rax
  _QWORD *v443; // rax
  __int64 v444; // rax
  __int64 v445; // rax
  _QWORD *v446; // rax
  _QWORD *v447; // rax
  __int64 v448; // rax
  __int64 v449; // rax
  _QWORD *v450; // rax
  _QWORD *v451; // rax
  __int64 v452; // rax
  __int64 v453; // rax
  _QWORD *v454; // rax
  _QWORD *v455; // rax
  __int64 v456; // rax
  __int64 v457; // rax
  _QWORD *v458; // rax
  _QWORD *v459; // rax
  __int64 v460; // rax
  __int64 v461; // rax
  _QWORD *v462; // rax
  _QWORD *v463; // rax
  __int64 v464; // rax
  __int64 v465; // rax
  _QWORD *v466; // rax
  _QWORD *v467; // rax
  __int64 v468; // rax
  __int64 v469; // rax
  _QWORD *v470; // rax
  _QWORD *v471; // rax
  __int64 v472; // rax
  __int64 v473; // rax
  _QWORD *v474; // rax
  _QWORD *v475; // rax
  __int64 v476; // rax
  __int64 v477; // rax
  _QWORD *v478; // rax
  _QWORD *v479; // rax
  __int64 v480; // rax
  __int64 v481; // rax
  _QWORD *v482; // rax
  _QWORD *v483; // rax
  __int64 v484; // rax
  __int64 v485; // rax
  _QWORD *v486; // rax
  _QWORD *v487; // rax
  __int64 v488; // rax
  __int64 v489; // rax
  _QWORD *v490; // rax
  _QWORD *v491; // rax
  __int64 v492; // rax
  __int64 v493; // rax
  _QWORD *v494; // rax
  _QWORD *v495; // rax
  __int64 v496; // rax
  __int64 v497; // rax
  _QWORD *v498; // rax
  _QWORD *v499; // rax
  __int64 v500; // rax
  __int64 v501; // rax
  _QWORD *v502; // rax
  _QWORD *v503; // rax
  __int64 v504; // rax
  __int64 v505; // rax
  _QWORD *v506; // rax
  _QWORD *v507; // rax
  __int64 v508; // rax
  __int64 v509; // rax
  _QWORD *v510; // rax
  _QWORD *v511; // rax
  __int64 v512; // rax
  __int64 v513; // rax
  __int128 v515; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v516; // [rsp+40h] [rbp-C0h]
  __int128 v517; // [rsp+50h] [rbp-B0h]
  __int128 v518; // [rsp+60h] [rbp-A0h]
  __int128 v519; // [rsp+70h] [rbp-90h]
  __int128 v520; // [rsp+80h] [rbp-80h]
  __int128 v521; // [rsp+90h] [rbp-70h]
  __int128 v522; // [rsp+A0h] [rbp-60h]
  __int128 v523; // [rsp+B0h] [rbp-50h]
  __int128 v524; // [rsp+C0h] [rbp-40h]
  __int128 v525; // [rsp+D0h] [rbp-30h]
  __int128 v526; // [rsp+E0h] [rbp-20h]
  __int128 v527; // [rsp+F0h] [rbp-10h]
  __int128 v528; // [rsp+100h] [rbp+0h]
  __int128 v529; // [rsp+110h] [rbp+10h]
  __int128 v530; // [rsp+120h] [rbp+20h]
  __int128 v531; // [rsp+130h] [rbp+30h]
  __int128 v532; // [rsp+140h] [rbp+40h]
  __int128 v533; // [rsp+150h] [rbp+50h]
  __int128 v534; // [rsp+160h] [rbp+60h]
  __int128 v535; // [rsp+170h] [rbp+70h]
  __int128 v536; // [rsp+180h] [rbp+80h]
  __int128 v537; // [rsp+190h] [rbp+90h]
  __int128 v538; // [rsp+1A0h] [rbp+A0h]
  __int128 v539; // [rsp+1B0h] [rbp+B0h]
  __int128 v540; // [rsp+1C0h] [rbp+C0h]
  __int128 v541; // [rsp+1D0h] [rbp+D0h]
  __int128 v542; // [rsp+1E0h] [rbp+E0h]
  __int128 v543; // [rsp+1F0h] [rbp+F0h]
  __int128 v544; // [rsp+200h] [rbp+100h]
  __int128 v545; // [rsp+210h] [rbp+110h]
  __int128 v546; // [rsp+220h] [rbp+120h]
  __int128 v547; // [rsp+230h] [rbp+130h]
  __int128 v548; // [rsp+240h] [rbp+140h]
  __int128 v549; // [rsp+250h] [rbp+150h]
  __int128 v550; // [rsp+260h] [rbp+160h]
  __int128 v551; // [rsp+270h] [rbp+170h]
  __int128 v552; // [rsp+280h] [rbp+180h]
  __int128 v553; // [rsp+290h] [rbp+190h]
  __int128 v554; // [rsp+2A0h] [rbp+1A0h]
  __int128 v555; // [rsp+2B0h] [rbp+1B0h]
  __int128 v556; // [rsp+2C0h] [rbp+1C0h]
  __int128 v557; // [rsp+2D0h] [rbp+1D0h]
  __int128 v558; // [rsp+2E0h] [rbp+1E0h]
  __int128 v559; // [rsp+2F0h] [rbp+1F0h]
  __int128 v560; // [rsp+300h] [rbp+200h]
  __int128 v561; // [rsp+310h] [rbp+210h]
  __int128 v562; // [rsp+320h] [rbp+220h]
  __int128 v563; // [rsp+330h] [rbp+230h]
  __int128 v564; // [rsp+340h] [rbp+240h]
  __int128 v565; // [rsp+350h] [rbp+250h]
  __int128 v566; // [rsp+360h] [rbp+260h]
  __int128 v567; // [rsp+370h] [rbp+270h]
  __int128 v568; // [rsp+380h] [rbp+280h]
  __int128 v569; // [rsp+390h] [rbp+290h]
  __int128 v570; // [rsp+3A0h] [rbp+2A0h]
  __int128 v571; // [rsp+3B0h] [rbp+2B0h]
  __int128 v572; // [rsp+3C0h] [rbp+2C0h]
  __int128 v573; // [rsp+3D0h] [rbp+2D0h]
  __int128 v574; // [rsp+3E0h] [rbp+2E0h]
  __int128 v575; // [rsp+3F0h] [rbp+2F0h]
  __int128 v576; // [rsp+400h] [rbp+300h]
  __int128 v577; // [rsp+410h] [rbp+310h]
  __int128 v578; // [rsp+420h] [rbp+320h]
  __int128 v579; // [rsp+430h] [rbp+330h]
  __int128 v580; // [rsp+440h] [rbp+340h]
  __int128 v581; // [rsp+450h] [rbp+350h]
  __int128 v582; // [rsp+460h] [rbp+360h]
  __int128 v583; // [rsp+470h] [rbp+370h]
  __int128 v584; // [rsp+480h] [rbp+380h]
  __int128 v585; // [rsp+490h] [rbp+390h]
  __int128 v586; // [rsp+4A0h] [rbp+3A0h]
  __int128 v587; // [rsp+4B0h] [rbp+3B0h]
  __int128 v588; // [rsp+4C0h] [rbp+3C0h]
  __int128 v589; // [rsp+4D0h] [rbp+3D0h]
  __int128 v590; // [rsp+4E0h] [rbp+3E0h]
  __int128 v591; // [rsp+4F0h] [rbp+3F0h]
  __int128 v592; // [rsp+500h] [rbp+400h]
  __int128 v593; // [rsp+510h] [rbp+410h]
  __int128 v594; // [rsp+520h] [rbp+420h]
  __int128 v595; // [rsp+530h] [rbp+430h]
  __int128 v596; // [rsp+540h] [rbp+440h]
  __int128 v597; // [rsp+550h] [rbp+450h]
  __int128 v598; // [rsp+560h] [rbp+460h]
  __int128 v599; // [rsp+570h] [rbp+470h]
  __int128 v600; // [rsp+580h] [rbp+480h]
  __int128 v601; // [rsp+590h] [rbp+490h]
  __int128 v602; // [rsp+5A0h] [rbp+4A0h]
  __int128 v603; // [rsp+5B0h] [rbp+4B0h]
  __int128 v604; // [rsp+5C0h] [rbp+4C0h]
  __int128 v605; // [rsp+5D0h] [rbp+4D0h]
  __int128 v606; // [rsp+5E0h] [rbp+4E0h]
  __int128 v607; // [rsp+5F0h] [rbp+4F0h]
  __int128 v608; // [rsp+600h] [rbp+500h]
  __int128 v609; // [rsp+610h] [rbp+510h]
  __int128 v610; // [rsp+620h] [rbp+520h]
  __int128 v611; // [rsp+630h] [rbp+530h]
  __int128 v612; // [rsp+640h] [rbp+540h]
  __int128 v613; // [rsp+650h] [rbp+550h]
  __int128 v614; // [rsp+660h] [rbp+560h]
  __int128 v615; // [rsp+670h] [rbp+570h]
  __int128 v616; // [rsp+680h] [rbp+580h]
  __int128 v617; // [rsp+690h] [rbp+590h]
  __int128 v618; // [rsp+6A0h] [rbp+5A0h]
  __int128 v619; // [rsp+6B0h] [rbp+5B0h]
  __int128 v620; // [rsp+6C0h] [rbp+5C0h]
  __int128 v621; // [rsp+6D0h] [rbp+5D0h]
  __int128 v622; // [rsp+6E0h] [rbp+5E0h]
  __int128 v623; // [rsp+6F0h] [rbp+5F0h]
  __int128 v624; // [rsp+700h] [rbp+600h]
  __int128 v625; // [rsp+710h] [rbp+610h]
  __int128 v626; // [rsp+720h] [rbp+620h]
  __int128 v627; // [rsp+730h] [rbp+630h]
  __int128 v628; // [rsp+740h] [rbp+640h]
  __int128 v629; // [rsp+750h] [rbp+650h]
  __int128 v630; // [rsp+760h] [rbp+660h]
  __int128 v631; // [rsp+770h] [rbp+670h]
  __int128 v632; // [rsp+780h] [rbp+680h]
  __int128 v633; // [rsp+790h] [rbp+690h]
  __int128 v634; // [rsp+7A0h] [rbp+6A0h]
  __int128 v635; // [rsp+7B0h] [rbp+6B0h]
  __int128 v636; // [rsp+7C0h] [rbp+6C0h]
  __int128 v637; // [rsp+7D0h] [rbp+6D0h]
  __int128 v638; // [rsp+7E0h] [rbp+6E0h]
  __int128 v639; // [rsp+7F0h] [rbp+6F0h]
  __int128 v640; // [rsp+800h] [rbp+700h]
  __int128 v641; // [rsp+810h] [rbp+710h]
  __int128 v642; // [rsp+820h] [rbp+720h]
  __int128 v643; // [rsp+830h] [rbp+730h]
  __int128 v644; // [rsp+840h] [rbp+740h]
  __int128 v645; // [rsp+850h] [rbp+750h]
  __int128 v646; // [rsp+860h] [rbp+760h]
  __int128 v647; // [rsp+870h] [rbp+770h]
  __int128 v648; // [rsp+880h] [rbp+780h]
  __int128 v649; // [rsp+890h] [rbp+790h]
  __int128 v650; // [rsp+8A0h] [rbp+7A0h]
  __int128 v651; // [rsp+8B0h] [rbp+7B0h]
  __int128 v652; // [rsp+8C0h] [rbp+7C0h]
  __int128 v653; // [rsp+8D0h] [rbp+7D0h]
  __int128 v654; // [rsp+8E0h] [rbp+7E0h]
  __int128 v655; // [rsp+8F0h] [rbp+7F0h]
  __int128 v656; // [rsp+900h] [rbp+800h]
  __int128 v657; // [rsp+910h] [rbp+810h]
  __int128 v658; // [rsp+920h] [rbp+820h]
  __int128 v659; // [rsp+930h] [rbp+830h]
  __int128 v660; // [rsp+940h] [rbp+840h]
  __int128 v661; // [rsp+950h] [rbp+850h]
  __int128 v662; // [rsp+960h] [rbp+860h]
  __int128 v663; // [rsp+970h] [rbp+870h]
  __int128 v664; // [rsp+980h] [rbp+880h]
  __int128 v665; // [rsp+990h] [rbp+890h]
  __int128 v666; // [rsp+9A0h] [rbp+8A0h]
  __int128 v667; // [rsp+9B0h] [rbp+8B0h]
  __int128 v668; // [rsp+9C0h] [rbp+8C0h]
  __int128 v669; // [rsp+9D0h] [rbp+8D0h]
  __int128 v670; // [rsp+9E0h] [rbp+8E0h]
  __int128 v671; // [rsp+9F0h] [rbp+8F0h]
  __int128 v672; // [rsp+A00h] [rbp+900h]
  __int128 v673; // [rsp+A10h] [rbp+910h]
  __int128 v674; // [rsp+A20h] [rbp+920h]
  __int128 v675; // [rsp+A30h] [rbp+930h]
  __int128 v676; // [rsp+A40h] [rbp+940h]
  __int128 v677; // [rsp+A50h] [rbp+950h]
  __int128 v678; // [rsp+A60h] [rbp+960h]
  __int128 v679; // [rsp+A70h] [rbp+970h]
  __int128 v680; // [rsp+A80h] [rbp+980h]
  __int128 v681; // [rsp+A90h] [rbp+990h]
  __int128 v682; // [rsp+AA0h] [rbp+9A0h]
  __int128 v683; // [rsp+AB0h] [rbp+9B0h]
  __int128 v684; // [rsp+AC0h] [rbp+9C0h]
  __int128 v685; // [rsp+AD0h] [rbp+9D0h]
  __int128 v686; // [rsp+AE0h] [rbp+9E0h]
  __int128 v687; // [rsp+AF0h] [rbp+9F0h]
  __int128 v688; // [rsp+B00h] [rbp+A00h]
  __int128 v689; // [rsp+B10h] [rbp+A10h]
  __int128 v690; // [rsp+B20h] [rbp+A20h]
  __int128 v691; // [rsp+B30h] [rbp+A30h]
  __int128 v692; // [rsp+B40h] [rbp+A40h]
  __int128 v693; // [rsp+B50h] [rbp+A50h]
  __int128 v694; // [rsp+B60h] [rbp+A60h]
  __int128 v695; // [rsp+B70h] [rbp+A70h]
  __int128 v696; // [rsp+B80h] [rbp+A80h]
  __int128 v697; // [rsp+B90h] [rbp+A90h]
  __int128 v698; // [rsp+BA0h] [rbp+AA0h]
  __int128 v699; // [rsp+BB0h] [rbp+AB0h]
  __int128 v700; // [rsp+BC0h] [rbp+AC0h]
  __int128 v701; // [rsp+BD0h] [rbp+AD0h]
  __int128 v702; // [rsp+BE0h] [rbp+AE0h]
  __int128 v703; // [rsp+BF0h] [rbp+AF0h]
  __int128 v704; // [rsp+C00h] [rbp+B00h]
  __int128 v705; // [rsp+C10h] [rbp+B10h]
  __int128 v706; // [rsp+C20h] [rbp+B20h]
  __int128 v707; // [rsp+C30h] [rbp+B30h]
  __int128 v708; // [rsp+C40h] [rbp+B40h]
  __int128 v709; // [rsp+C50h] [rbp+B50h]
  __int128 v710; // [rsp+C60h] [rbp+B60h]
  __int128 v711; // [rsp+C70h] [rbp+B70h]
  __int128 v712; // [rsp+C80h] [rbp+B80h]
  __int128 v713; // [rsp+C90h] [rbp+B90h]
  __int128 v714; // [rsp+CA0h] [rbp+BA0h]
  __int128 v715; // [rsp+CB0h] [rbp+BB0h]
  __int128 v716; // [rsp+CC0h] [rbp+BC0h]
  __int128 v717; // [rsp+CD0h] [rbp+BD0h]
  __int128 v718; // [rsp+CE0h] [rbp+BE0h]
  __int128 v719; // [rsp+CF0h] [rbp+BF0h]
  __int128 v720; // [rsp+D00h] [rbp+C00h]
  __int128 v721; // [rsp+D10h] [rbp+C10h]
  __int128 v722; // [rsp+D20h] [rbp+C20h]
  __int128 v723; // [rsp+D30h] [rbp+C30h]
  __int128 v724; // [rsp+D40h] [rbp+C40h]
  __int128 v725; // [rsp+D50h] [rbp+C50h]
  __int128 v726; // [rsp+D60h] [rbp+C60h]
  __int128 v727; // [rsp+D70h] [rbp+C70h]
  __int128 v728; // [rsp+D80h] [rbp+C80h]
  __int128 v729; // [rsp+D90h] [rbp+C90h]
  __int128 v730; // [rsp+DA0h] [rbp+CA0h]
  __int128 v731; // [rsp+DB0h] [rbp+CB0h]
  __int128 v732; // [rsp+DC0h] [rbp+CC0h]
  __int128 v733; // [rsp+DD0h] [rbp+CD0h]
  __int128 v734; // [rsp+DE0h] [rbp+CE0h]
  __int128 v735; // [rsp+DF0h] [rbp+CF0h]
  __int128 v736; // [rsp+E00h] [rbp+D00h]
  __int128 v737; // [rsp+E10h] [rbp+D10h]
  __int128 v738; // [rsp+E20h] [rbp+D20h]
  __int128 v739; // [rsp+E30h] [rbp+D30h]
  __int128 v740; // [rsp+E40h] [rbp+D40h]
  __int128 v741; // [rsp+E50h] [rbp+D50h]
  __int128 v742; // [rsp+E60h] [rbp+D60h]
  __int128 v743; // [rsp+E70h] [rbp+D70h]
  __int128 v744; // [rsp+E80h] [rbp+D80h]
  __int128 v745; // [rsp+E90h] [rbp+D90h]
  __int128 v746; // [rsp+EA0h] [rbp+DA0h]
  __int128 v747; // [rsp+EB0h] [rbp+DB0h]
  __int128 v748; // [rsp+EC0h] [rbp+DC0h]
  __int128 v749; // [rsp+ED0h] [rbp+DD0h]
  __int128 v750; // [rsp+EE0h] [rbp+DE0h]
  __int128 v751; // [rsp+EF0h] [rbp+DF0h]
  __int128 v752; // [rsp+F00h] [rbp+E00h]
  __int128 v753; // [rsp+F10h] [rbp+E10h]
  __int128 v754; // [rsp+F20h] [rbp+E20h]
  __int128 v755; // [rsp+F30h] [rbp+E30h]
  __int128 v756; // [rsp+F40h] [rbp+E40h]
  __int128 v757; // [rsp+F50h] [rbp+E50h]
  __int128 v758; // [rsp+F60h] [rbp+E60h]
  __int128 v759; // [rsp+F70h] [rbp+E70h]
  __int128 v760; // [rsp+F80h] [rbp+E80h]
  __int128 v761; // [rsp+F90h] [rbp+E90h]
  __int128 v762; // [rsp+FA0h] [rbp+EA0h]
  __int128 v763; // [rsp+FB0h] [rbp+EB0h]
  __int128 v764; // [rsp+FC0h] [rbp+EC0h]
  __int128 v765; // [rsp+FD0h] [rbp+ED0h]
  __int128 v766; // [rsp+FE0h] [rbp+EE0h]
  __int128 v767; // [rsp+FF0h] [rbp+EF0h]
  __int128 v768; // [rsp+1000h] [rbp+F00h]
  __int128 v769; // [rsp+1010h] [rbp+F10h]
  __int128 v770; // [rsp+1020h] [rbp+F20h]
  __int128 v771; // [rsp+1030h] [rbp+F30h]
  __int128 v772; // [rsp+1040h] [rbp+F40h]
  _BYTE v773[32]; // [rsp+1050h] [rbp+F50h] BYREF
  _BYTE v774[32]; // [rsp+1070h] [rbp+F70h] BYREF
  _BYTE v775[32]; // [rsp+1090h] [rbp+F90h] BYREF
  _BYTE v776[32]; // [rsp+10B0h] [rbp+FB0h] BYREF
  _BYTE v777[32]; // [rsp+10D0h] [rbp+FD0h] BYREF
  _BYTE v778[32]; // [rsp+10F0h] [rbp+FF0h] BYREF
  _BYTE v779[32]; // [rsp+1110h] [rbp+1010h] BYREF
  _BYTE v780[32]; // [rsp+1130h] [rbp+1030h] BYREF
  _BYTE v781[32]; // [rsp+1150h] [rbp+1050h] BYREF
  _BYTE v782[32]; // [rsp+1170h] [rbp+1070h] BYREF
  _BYTE v783[32]; // [rsp+1190h] [rbp+1090h] BYREF
  _BYTE v784[32]; // [rsp+11B0h] [rbp+10B0h] BYREF
  _BYTE v785[32]; // [rsp+11D0h] [rbp+10D0h] BYREF
  _BYTE v786[32]; // [rsp+11F0h] [rbp+10F0h] BYREF
  _BYTE v787[32]; // [rsp+1210h] [rbp+1110h] BYREF
  _BYTE v788[32]; // [rsp+1230h] [rbp+1130h] BYREF
  _BYTE v789[32]; // [rsp+1250h] [rbp+1150h] BYREF
  _BYTE v790[32]; // [rsp+1270h] [rbp+1170h] BYREF
  _BYTE v791[32]; // [rsp+1290h] [rbp+1190h] BYREF
  _BYTE v792[32]; // [rsp+12B0h] [rbp+11B0h] BYREF
  _BYTE v793[32]; // [rsp+12D0h] [rbp+11D0h] BYREF
  _BYTE v794[32]; // [rsp+12F0h] [rbp+11F0h] BYREF
  _BYTE v795[32]; // [rsp+1310h] [rbp+1210h] BYREF
  _BYTE v796[32]; // [rsp+1330h] [rbp+1230h] BYREF
  _BYTE v797[32]; // [rsp+1350h] [rbp+1250h] BYREF
  _BYTE v798[32]; // [rsp+1370h] [rbp+1270h] BYREF
  _BYTE v799[32]; // [rsp+1390h] [rbp+1290h] BYREF
  _BYTE v800[32]; // [rsp+13B0h] [rbp+12B0h] BYREF
  _BYTE v801[32]; // [rsp+13D0h] [rbp+12D0h] BYREF
  _BYTE v802[32]; // [rsp+13F0h] [rbp+12F0h] BYREF
  _BYTE v803[32]; // [rsp+1410h] [rbp+1310h] BYREF
  _BYTE v804[32]; // [rsp+1430h] [rbp+1330h] BYREF
  _BYTE v805[32]; // [rsp+1450h] [rbp+1350h] BYREF
  _BYTE v806[32]; // [rsp+1470h] [rbp+1370h] BYREF
  _BYTE v807[32]; // [rsp+1490h] [rbp+1390h] BYREF
  _BYTE v808[32]; // [rsp+14B0h] [rbp+13B0h] BYREF
  _BYTE v809[32]; // [rsp+14D0h] [rbp+13D0h] BYREF
  _BYTE v810[32]; // [rsp+14F0h] [rbp+13F0h] BYREF
  _BYTE v811[32]; // [rsp+1510h] [rbp+1410h] BYREF
  _BYTE v812[32]; // [rsp+1530h] [rbp+1430h] BYREF
  _BYTE v813[32]; // [rsp+1550h] [rbp+1450h] BYREF
  _BYTE v814[32]; // [rsp+1570h] [rbp+1470h] BYREF
  _BYTE v815[32]; // [rsp+1590h] [rbp+1490h] BYREF
  _BYTE v816[32]; // [rsp+15B0h] [rbp+14B0h] BYREF
  _BYTE v817[32]; // [rsp+15D0h] [rbp+14D0h] BYREF
  _BYTE v818[32]; // [rsp+15F0h] [rbp+14F0h] BYREF
  _BYTE v819[32]; // [rsp+1610h] [rbp+1510h] BYREF
  _BYTE v820[32]; // [rsp+1630h] [rbp+1530h] BYREF
  _BYTE v821[32]; // [rsp+1650h] [rbp+1550h] BYREF
  _BYTE v822[32]; // [rsp+1670h] [rbp+1570h] BYREF
  _BYTE v823[32]; // [rsp+1690h] [rbp+1590h] BYREF
  _BYTE v824[32]; // [rsp+16B0h] [rbp+15B0h] BYREF
  _BYTE v825[32]; // [rsp+16D0h] [rbp+15D0h] BYREF
  _BYTE v826[32]; // [rsp+16F0h] [rbp+15F0h] BYREF
  _BYTE v827[32]; // [rsp+1710h] [rbp+1610h] BYREF
  _BYTE v828[32]; // [rsp+1730h] [rbp+1630h] BYREF
  _BYTE v829[32]; // [rsp+1750h] [rbp+1650h] BYREF
  _BYTE v830[32]; // [rsp+1770h] [rbp+1670h] BYREF
  _BYTE v831[32]; // [rsp+1790h] [rbp+1690h] BYREF
  _BYTE v832[32]; // [rsp+17B0h] [rbp+16B0h] BYREF
  _BYTE v833[32]; // [rsp+17D0h] [rbp+16D0h] BYREF
  _BYTE v834[32]; // [rsp+17F0h] [rbp+16F0h] BYREF
  _BYTE v835[32]; // [rsp+1810h] [rbp+1710h] BYREF
  _BYTE v836[32]; // [rsp+1830h] [rbp+1730h] BYREF
  _BYTE v837[32]; // [rsp+1850h] [rbp+1750h] BYREF
  _BYTE v838[32]; // [rsp+1870h] [rbp+1770h] BYREF
  _BYTE v839[32]; // [rsp+1890h] [rbp+1790h] BYREF
  _BYTE v840[32]; // [rsp+18B0h] [rbp+17B0h] BYREF
  _BYTE v841[32]; // [rsp+18D0h] [rbp+17D0h] BYREF
  _BYTE v842[32]; // [rsp+18F0h] [rbp+17F0h] BYREF
  _BYTE v843[32]; // [rsp+1910h] [rbp+1810h] BYREF
  _BYTE v844[32]; // [rsp+1930h] [rbp+1830h] BYREF
  _BYTE v845[32]; // [rsp+1950h] [rbp+1850h] BYREF
  _BYTE v846[32]; // [rsp+1970h] [rbp+1870h] BYREF
  _BYTE v847[32]; // [rsp+1990h] [rbp+1890h] BYREF
  _BYTE v848[32]; // [rsp+19B0h] [rbp+18B0h] BYREF
  _BYTE v849[32]; // [rsp+19D0h] [rbp+18D0h] BYREF
  _BYTE v850[32]; // [rsp+19F0h] [rbp+18F0h] BYREF
  _BYTE v851[32]; // [rsp+1A10h] [rbp+1910h] BYREF
  _BYTE v852[32]; // [rsp+1A30h] [rbp+1930h] BYREF
  _BYTE v853[32]; // [rsp+1A50h] [rbp+1950h] BYREF
  _BYTE v854[32]; // [rsp+1A70h] [rbp+1970h] BYREF
  _BYTE v855[32]; // [rsp+1A90h] [rbp+1990h] BYREF
  _BYTE v856[32]; // [rsp+1AB0h] [rbp+19B0h] BYREF
  _BYTE v857[32]; // [rsp+1AD0h] [rbp+19D0h] BYREF
  _BYTE v858[32]; // [rsp+1AF0h] [rbp+19F0h] BYREF
  _BYTE v859[32]; // [rsp+1B10h] [rbp+1A10h] BYREF
  _BYTE v860[32]; // [rsp+1B30h] [rbp+1A30h] BYREF
  _BYTE v861[32]; // [rsp+1B50h] [rbp+1A50h] BYREF
  _BYTE v862[32]; // [rsp+1B70h] [rbp+1A70h] BYREF
  _BYTE v863[32]; // [rsp+1B90h] [rbp+1A90h] BYREF
  _BYTE v864[32]; // [rsp+1BB0h] [rbp+1AB0h] BYREF
  _BYTE v865[32]; // [rsp+1BD0h] [rbp+1AD0h] BYREF
  _BYTE v866[32]; // [rsp+1BF0h] [rbp+1AF0h] BYREF
  _BYTE v867[32]; // [rsp+1C10h] [rbp+1B10h] BYREF
  _BYTE v868[32]; // [rsp+1C30h] [rbp+1B30h] BYREF
  _BYTE v869[32]; // [rsp+1C50h] [rbp+1B50h] BYREF
  _BYTE v870[32]; // [rsp+1C70h] [rbp+1B70h] BYREF
  _BYTE v871[32]; // [rsp+1C90h] [rbp+1B90h] BYREF
  _BYTE v872[32]; // [rsp+1CB0h] [rbp+1BB0h] BYREF
  _BYTE v873[32]; // [rsp+1CD0h] [rbp+1BD0h] BYREF
  _BYTE v874[32]; // [rsp+1CF0h] [rbp+1BF0h] BYREF
  _BYTE v875[32]; // [rsp+1D10h] [rbp+1C10h] BYREF
  _BYTE v876[32]; // [rsp+1D30h] [rbp+1C30h] BYREF
  _BYTE v877[32]; // [rsp+1D50h] [rbp+1C50h] BYREF
  _BYTE v878[32]; // [rsp+1D70h] [rbp+1C70h] BYREF
  _BYTE v879[32]; // [rsp+1D90h] [rbp+1C90h] BYREF
  _BYTE v880[32]; // [rsp+1DB0h] [rbp+1CB0h] BYREF
  _BYTE v881[32]; // [rsp+1DD0h] [rbp+1CD0h] BYREF
  _BYTE v882[32]; // [rsp+1DF0h] [rbp+1CF0h] BYREF
  _BYTE v883[32]; // [rsp+1E10h] [rbp+1D10h] BYREF
  _BYTE v884[32]; // [rsp+1E30h] [rbp+1D30h] BYREF
  _BYTE v885[32]; // [rsp+1E50h] [rbp+1D50h] BYREF
  _BYTE v886[32]; // [rsp+1E70h] [rbp+1D70h] BYREF
  _BYTE v887[32]; // [rsp+1E90h] [rbp+1D90h] BYREF
  _BYTE v888[32]; // [rsp+1EB0h] [rbp+1DB0h] BYREF
  _BYTE v889[32]; // [rsp+1ED0h] [rbp+1DD0h] BYREF
  _BYTE v890[32]; // [rsp+1EF0h] [rbp+1DF0h] BYREF
  _BYTE v891[32]; // [rsp+1F10h] [rbp+1E10h] BYREF
  _BYTE v892[32]; // [rsp+1F30h] [rbp+1E30h] BYREF
  _BYTE v893[32]; // [rsp+1F50h] [rbp+1E50h] BYREF
  _BYTE v894[32]; // [rsp+1F70h] [rbp+1E70h] BYREF
  _BYTE v895[32]; // [rsp+1F90h] [rbp+1E90h] BYREF
  _BYTE v896[32]; // [rsp+1FB0h] [rbp+1EB0h] BYREF
  _BYTE v897[32]; // [rsp+1FD0h] [rbp+1ED0h] BYREF
  _BYTE v898[32]; // [rsp+1FF0h] [rbp+1EF0h] BYREF
  _BYTE v899[32]; // [rsp+2010h] [rbp+1F10h] BYREF
  _BYTE v900[32]; // [rsp+2030h] [rbp+1F30h] BYREF
  _QWORD v901[4]; // [rsp+2050h] [rbp+1F50h] BYREF
  _BYTE v902[32]; // [rsp+2070h] [rbp+1F70h] BYREF
  _BYTE v903[32]; // [rsp+2090h] [rbp+1F90h] BYREF
  _QWORD v904[4]; // [rsp+20B0h] [rbp+1FB0h] BYREF
  _QWORD v905[4]; // [rsp+20D0h] [rbp+1FD0h] BYREF
  _BYTE v906[32]; // [rsp+20F0h] [rbp+1FF0h] BYREF
  _QWORD v907[4]; // [rsp+2110h] [rbp+2010h] BYREF
  _BYTE v908[32]; // [rsp+2130h] [rbp+2030h] BYREF
  _BYTE v909[32]; // [rsp+2150h] [rbp+2050h] BYREF
  _QWORD v910[4]; // [rsp+2170h] [rbp+2070h] BYREF
  _QWORD v911[4]; // [rsp+2190h] [rbp+2090h] BYREF
  _BYTE v912[32]; // [rsp+21B0h] [rbp+20B0h] BYREF
  _QWORD v913[4]; // [rsp+21D0h] [rbp+20D0h] BYREF
  _BYTE v914[32]; // [rsp+21F0h] [rbp+20F0h] BYREF
  _BYTE v915[32]; // [rsp+2210h] [rbp+2110h] BYREF
  _QWORD v916[4]; // [rsp+2230h] [rbp+2130h] BYREF
  _QWORD v917[4]; // [rsp+2250h] [rbp+2150h] BYREF
  _BYTE v918[32]; // [rsp+2270h] [rbp+2170h] BYREF
  _QWORD v919[4]; // [rsp+2290h] [rbp+2190h] BYREF
  _BYTE v920[32]; // [rsp+22B0h] [rbp+21B0h] BYREF
  _BYTE v921[32]; // [rsp+22D0h] [rbp+21D0h] BYREF
  _QWORD v922[4]; // [rsp+22F0h] [rbp+21F0h] BYREF
  _QWORD v923[4]; // [rsp+2310h] [rbp+2210h] BYREF
  _BYTE v924[32]; // [rsp+2330h] [rbp+2230h] BYREF
  _QWORD v925[4]; // [rsp+2350h] [rbp+2250h] BYREF
  _BYTE v926[32]; // [rsp+2370h] [rbp+2270h] BYREF
  _BYTE v927[32]; // [rsp+2390h] [rbp+2290h] BYREF
  _QWORD v928[4]; // [rsp+23B0h] [rbp+22B0h] BYREF
  _QWORD v929[4]; // [rsp+23D0h] [rbp+22D0h] BYREF
  _BYTE v930[32]; // [rsp+23F0h] [rbp+22F0h] BYREF
  _QWORD v931[4]; // [rsp+2410h] [rbp+2310h] BYREF
  _BYTE v932[32]; // [rsp+2430h] [rbp+2330h] BYREF
  _BYTE v933[32]; // [rsp+2450h] [rbp+2350h] BYREF
  _QWORD v934[4]; // [rsp+2470h] [rbp+2370h] BYREF
  _QWORD v935[4]; // [rsp+2490h] [rbp+2390h] BYREF
  _BYTE v936[32]; // [rsp+24B0h] [rbp+23B0h] BYREF
  _QWORD v937[4]; // [rsp+24D0h] [rbp+23D0h] BYREF
  _BYTE v938[32]; // [rsp+24F0h] [rbp+23F0h] BYREF
  _BYTE v939[32]; // [rsp+2510h] [rbp+2410h] BYREF
  _QWORD v940[4]; // [rsp+2530h] [rbp+2430h] BYREF
  _QWORD v941[4]; // [rsp+2550h] [rbp+2450h] BYREF
  _BYTE v942[32]; // [rsp+2570h] [rbp+2470h] BYREF
  _QWORD v943[4]; // [rsp+2590h] [rbp+2490h] BYREF
  _BYTE v944[32]; // [rsp+25B0h] [rbp+24B0h] BYREF
  _BYTE v945[32]; // [rsp+25D0h] [rbp+24D0h] BYREF
  _QWORD v946[4]; // [rsp+25F0h] [rbp+24F0h] BYREF
  _QWORD v947[4]; // [rsp+2610h] [rbp+2510h] BYREF
  _BYTE v948[32]; // [rsp+2630h] [rbp+2530h] BYREF
  _QWORD v949[4]; // [rsp+2650h] [rbp+2550h] BYREF
  _BYTE v950[32]; // [rsp+2670h] [rbp+2570h] BYREF
  _BYTE v951[32]; // [rsp+2690h] [rbp+2590h] BYREF
  _QWORD v952[4]; // [rsp+26B0h] [rbp+25B0h] BYREF
  _QWORD v953[4]; // [rsp+26D0h] [rbp+25D0h] BYREF
  _BYTE v954[32]; // [rsp+26F0h] [rbp+25F0h] BYREF
  _QWORD v955[4]; // [rsp+2710h] [rbp+2610h] BYREF
  _BYTE v956[32]; // [rsp+2730h] [rbp+2630h] BYREF
  _BYTE v957[32]; // [rsp+2750h] [rbp+2650h] BYREF
  _QWORD v958[4]; // [rsp+2770h] [rbp+2670h] BYREF
  _QWORD v959[4]; // [rsp+2790h] [rbp+2690h] BYREF
  _BYTE v960[32]; // [rsp+27B0h] [rbp+26B0h] BYREF
  _QWORD v961[4]; // [rsp+27D0h] [rbp+26D0h] BYREF
  _BYTE v962[32]; // [rsp+27F0h] [rbp+26F0h] BYREF
  _BYTE v963[32]; // [rsp+2810h] [rbp+2710h] BYREF
  _QWORD v964[4]; // [rsp+2830h] [rbp+2730h] BYREF
  _QWORD v965[4]; // [rsp+2850h] [rbp+2750h] BYREF
  _BYTE v966[32]; // [rsp+2870h] [rbp+2770h] BYREF
  _QWORD v967[4]; // [rsp+2890h] [rbp+2790h] BYREF
  _BYTE v968[32]; // [rsp+28B0h] [rbp+27B0h] BYREF
  _BYTE v969[32]; // [rsp+28D0h] [rbp+27D0h] BYREF
  _QWORD v970[4]; // [rsp+28F0h] [rbp+27F0h] BYREF
  _QWORD v971[4]; // [rsp+2910h] [rbp+2810h] BYREF
  _BYTE v972[32]; // [rsp+2930h] [rbp+2830h] BYREF
  _QWORD v973[4]; // [rsp+2950h] [rbp+2850h] BYREF
  _BYTE v974[32]; // [rsp+2970h] [rbp+2870h] BYREF
  _BYTE v975[32]; // [rsp+2990h] [rbp+2890h] BYREF
  _QWORD v976[4]; // [rsp+29B0h] [rbp+28B0h] BYREF
  _QWORD v977[4]; // [rsp+29D0h] [rbp+28D0h] BYREF
  _BYTE v978[32]; // [rsp+29F0h] [rbp+28F0h] BYREF
  _QWORD v979[4]; // [rsp+2A10h] [rbp+2910h] BYREF
  _BYTE v980[32]; // [rsp+2A30h] [rbp+2930h] BYREF
  _BYTE v981[32]; // [rsp+2A50h] [rbp+2950h] BYREF
  _QWORD v982[4]; // [rsp+2A70h] [rbp+2970h] BYREF
  _QWORD v983[4]; // [rsp+2A90h] [rbp+2990h] BYREF
  _BYTE v984[32]; // [rsp+2AB0h] [rbp+29B0h] BYREF
  _QWORD v985[4]; // [rsp+2AD0h] [rbp+29D0h] BYREF
  _BYTE v986[32]; // [rsp+2AF0h] [rbp+29F0h] BYREF
  _BYTE v987[32]; // [rsp+2B10h] [rbp+2A10h] BYREF
  _QWORD v988[4]; // [rsp+2B30h] [rbp+2A30h] BYREF
  _QWORD v989[4]; // [rsp+2B50h] [rbp+2A50h] BYREF
  _BYTE v990[32]; // [rsp+2B70h] [rbp+2A70h] BYREF
  _QWORD v991[4]; // [rsp+2B90h] [rbp+2A90h] BYREF
  _BYTE v992[32]; // [rsp+2BB0h] [rbp+2AB0h] BYREF
  _BYTE v993[32]; // [rsp+2BD0h] [rbp+2AD0h] BYREF
  _QWORD v994[4]; // [rsp+2BF0h] [rbp+2AF0h] BYREF
  _QWORD v995[4]; // [rsp+2C10h] [rbp+2B10h] BYREF
  _BYTE v996[32]; // [rsp+2C30h] [rbp+2B30h] BYREF
  _QWORD v997[4]; // [rsp+2C50h] [rbp+2B50h] BYREF
  _BYTE v998[32]; // [rsp+2C70h] [rbp+2B70h] BYREF
  _BYTE v999[32]; // [rsp+2C90h] [rbp+2B90h] BYREF
  _QWORD v1000[4]; // [rsp+2CB0h] [rbp+2BB0h] BYREF
  _QWORD v1001[4]; // [rsp+2CD0h] [rbp+2BD0h] BYREF
  _BYTE v1002[32]; // [rsp+2CF0h] [rbp+2BF0h] BYREF
  _QWORD v1003[4]; // [rsp+2D10h] [rbp+2C10h] BYREF
  _BYTE v1004[32]; // [rsp+2D30h] [rbp+2C30h] BYREF
  _BYTE v1005[32]; // [rsp+2D50h] [rbp+2C50h] BYREF
  _QWORD v1006[4]; // [rsp+2D70h] [rbp+2C70h] BYREF
  _QWORD v1007[4]; // [rsp+2D90h] [rbp+2C90h] BYREF
  _BYTE v1008[32]; // [rsp+2DB0h] [rbp+2CB0h] BYREF
  _QWORD v1009[4]; // [rsp+2DD0h] [rbp+2CD0h] BYREF
  _BYTE v1010[32]; // [rsp+2DF0h] [rbp+2CF0h] BYREF
  _BYTE v1011[32]; // [rsp+2E10h] [rbp+2D10h] BYREF
  _QWORD v1012[4]; // [rsp+2E30h] [rbp+2D30h] BYREF
  _QWORD v1013[4]; // [rsp+2E50h] [rbp+2D50h] BYREF
  _BYTE v1014[32]; // [rsp+2E70h] [rbp+2D70h] BYREF
  _QWORD v1015[4]; // [rsp+2E90h] [rbp+2D90h] BYREF
  _BYTE v1016[32]; // [rsp+2EB0h] [rbp+2DB0h] BYREF
  _BYTE v1017[32]; // [rsp+2ED0h] [rbp+2DD0h] BYREF
  _QWORD v1018[4]; // [rsp+2EF0h] [rbp+2DF0h] BYREF
  _QWORD v1019[4]; // [rsp+2F10h] [rbp+2E10h] BYREF
  _BYTE v1020[32]; // [rsp+2F30h] [rbp+2E30h] BYREF
  _QWORD v1021[4]; // [rsp+2F50h] [rbp+2E50h] BYREF
  _BYTE v1022[32]; // [rsp+2F70h] [rbp+2E70h] BYREF
  _BYTE v1023[32]; // [rsp+2F90h] [rbp+2E90h] BYREF
  _QWORD v1024[4]; // [rsp+2FB0h] [rbp+2EB0h] BYREF
  _QWORD v1025[4]; // [rsp+2FD0h] [rbp+2ED0h] BYREF
  _BYTE v1026[32]; // [rsp+2FF0h] [rbp+2EF0h] BYREF
  _QWORD v1027[4]; // [rsp+3010h] [rbp+2F10h] BYREF
  _BYTE v1028[32]; // [rsp+3030h] [rbp+2F30h] BYREF
  _BYTE v1029[32]; // [rsp+3050h] [rbp+2F50h] BYREF
  _QWORD v1030[4]; // [rsp+3070h] [rbp+2F70h] BYREF
  _QWORD v1031[4]; // [rsp+3090h] [rbp+2F90h] BYREF
  _BYTE v1032[32]; // [rsp+30B0h] [rbp+2FB0h] BYREF
  _QWORD v1033[4]; // [rsp+30D0h] [rbp+2FD0h] BYREF
  _BYTE v1034[32]; // [rsp+30F0h] [rbp+2FF0h] BYREF
  _BYTE v1035[32]; // [rsp+3110h] [rbp+3010h] BYREF
  _QWORD v1036[4]; // [rsp+3130h] [rbp+3030h] BYREF
  _QWORD v1037[4]; // [rsp+3150h] [rbp+3050h] BYREF
  _BYTE v1038[32]; // [rsp+3170h] [rbp+3070h] BYREF
  _QWORD v1039[4]; // [rsp+3190h] [rbp+3090h] BYREF
  _BYTE v1040[32]; // [rsp+31B0h] [rbp+30B0h] BYREF
  _BYTE v1041[32]; // [rsp+31D0h] [rbp+30D0h] BYREF
  _QWORD v1042[4]; // [rsp+31F0h] [rbp+30F0h] BYREF
  _QWORD v1043[4]; // [rsp+3210h] [rbp+3110h] BYREF
  _BYTE v1044[32]; // [rsp+3230h] [rbp+3130h] BYREF
  _QWORD v1045[4]; // [rsp+3250h] [rbp+3150h] BYREF
  _BYTE v1046[32]; // [rsp+3270h] [rbp+3170h] BYREF
  _BYTE v1047[32]; // [rsp+3290h] [rbp+3190h] BYREF
  _QWORD v1048[4]; // [rsp+32B0h] [rbp+31B0h] BYREF
  _QWORD v1049[4]; // [rsp+32D0h] [rbp+31D0h] BYREF
  _BYTE v1050[32]; // [rsp+32F0h] [rbp+31F0h] BYREF
  _QWORD v1051[4]; // [rsp+3310h] [rbp+3210h] BYREF
  _BYTE v1052[32]; // [rsp+3330h] [rbp+3230h] BYREF
  _BYTE v1053[32]; // [rsp+3350h] [rbp+3250h] BYREF
  _QWORD v1054[4]; // [rsp+3370h] [rbp+3270h] BYREF
  _QWORD v1055[4]; // [rsp+3390h] [rbp+3290h] BYREF
  _BYTE v1056[32]; // [rsp+33B0h] [rbp+32B0h] BYREF
  _QWORD v1057[4]; // [rsp+33D0h] [rbp+32D0h] BYREF
  _BYTE v1058[32]; // [rsp+33F0h] [rbp+32F0h] BYREF
  _BYTE v1059[32]; // [rsp+3410h] [rbp+3310h] BYREF
  _QWORD v1060[4]; // [rsp+3430h] [rbp+3330h] BYREF
  _QWORD v1061[4]; // [rsp+3450h] [rbp+3350h] BYREF
  _BYTE v1062[32]; // [rsp+3470h] [rbp+3370h] BYREF
  _QWORD v1063[4]; // [rsp+3490h] [rbp+3390h] BYREF
  _BYTE v1064[32]; // [rsp+34B0h] [rbp+33B0h] BYREF
  _BYTE v1065[32]; // [rsp+34D0h] [rbp+33D0h] BYREF
  _QWORD v1066[4]; // [rsp+34F0h] [rbp+33F0h] BYREF
  _QWORD v1067[4]; // [rsp+3510h] [rbp+3410h] BYREF
  _BYTE v1068[32]; // [rsp+3530h] [rbp+3430h] BYREF
  _QWORD v1069[4]; // [rsp+3550h] [rbp+3450h] BYREF
  _BYTE v1070[32]; // [rsp+3570h] [rbp+3470h] BYREF
  _BYTE v1071[32]; // [rsp+3590h] [rbp+3490h] BYREF
  _QWORD v1072[4]; // [rsp+35B0h] [rbp+34B0h] BYREF
  _QWORD v1073[4]; // [rsp+35D0h] [rbp+34D0h] BYREF
  _BYTE v1074[32]; // [rsp+35F0h] [rbp+34F0h] BYREF
  _QWORD v1075[4]; // [rsp+3610h] [rbp+3510h] BYREF
  _BYTE v1076[32]; // [rsp+3630h] [rbp+3530h] BYREF
  _BYTE v1077[32]; // [rsp+3650h] [rbp+3550h] BYREF
  _QWORD v1078[4]; // [rsp+3670h] [rbp+3570h] BYREF
  _QWORD v1079[4]; // [rsp+3690h] [rbp+3590h] BYREF
  _BYTE v1080[32]; // [rsp+36B0h] [rbp+35B0h] BYREF
  _QWORD v1081[4]; // [rsp+36D0h] [rbp+35D0h] BYREF
  _BYTE v1082[32]; // [rsp+36F0h] [rbp+35F0h] BYREF
  _BYTE v1083[32]; // [rsp+3710h] [rbp+3610h] BYREF
  _QWORD v1084[4]; // [rsp+3730h] [rbp+3630h] BYREF
  _QWORD v1085[4]; // [rsp+3750h] [rbp+3650h] BYREF
  _BYTE v1086[32]; // [rsp+3770h] [rbp+3670h] BYREF
  _QWORD v1087[4]; // [rsp+3790h] [rbp+3690h] BYREF
  _BYTE v1088[32]; // [rsp+37B0h] [rbp+36B0h] BYREF
  _BYTE v1089[32]; // [rsp+37D0h] [rbp+36D0h] BYREF
  _QWORD v1090[4]; // [rsp+37F0h] [rbp+36F0h] BYREF
  _QWORD v1091[4]; // [rsp+3810h] [rbp+3710h] BYREF
  _BYTE v1092[32]; // [rsp+3830h] [rbp+3730h] BYREF
  _QWORD v1093[4]; // [rsp+3850h] [rbp+3750h] BYREF
  _BYTE v1094[32]; // [rsp+3870h] [rbp+3770h] BYREF
  _BYTE v1095[32]; // [rsp+3890h] [rbp+3790h] BYREF
  _QWORD v1096[4]; // [rsp+38B0h] [rbp+37B0h] BYREF
  _QWORD v1097[4]; // [rsp+38D0h] [rbp+37D0h] BYREF
  _BYTE v1098[32]; // [rsp+38F0h] [rbp+37F0h] BYREF
  _QWORD v1099[4]; // [rsp+3910h] [rbp+3810h] BYREF
  _BYTE v1100[32]; // [rsp+3930h] [rbp+3830h] BYREF
  _BYTE v1101[32]; // [rsp+3950h] [rbp+3850h] BYREF
  _QWORD v1102[4]; // [rsp+3970h] [rbp+3870h] BYREF
  _QWORD v1103[4]; // [rsp+3990h] [rbp+3890h] BYREF
  _BYTE v1104[32]; // [rsp+39B0h] [rbp+38B0h] BYREF
  _QWORD v1105[4]; // [rsp+39D0h] [rbp+38D0h] BYREF
  _BYTE v1106[32]; // [rsp+39F0h] [rbp+38F0h] BYREF
  _BYTE v1107[32]; // [rsp+3A10h] [rbp+3910h] BYREF
  _QWORD v1108[4]; // [rsp+3A30h] [rbp+3930h] BYREF
  _QWORD v1109[4]; // [rsp+3A50h] [rbp+3950h] BYREF
  _BYTE v1110[32]; // [rsp+3A70h] [rbp+3970h] BYREF
  _QWORD v1111[4]; // [rsp+3A90h] [rbp+3990h] BYREF
  _BYTE v1112[32]; // [rsp+3AB0h] [rbp+39B0h] BYREF
  _BYTE v1113[32]; // [rsp+3AD0h] [rbp+39D0h] BYREF
  _QWORD v1114[4]; // [rsp+3AF0h] [rbp+39F0h] BYREF
  _QWORD v1115[4]; // [rsp+3B10h] [rbp+3A10h] BYREF
  _BYTE v1116[32]; // [rsp+3B30h] [rbp+3A30h] BYREF
  _QWORD v1117[4]; // [rsp+3B50h] [rbp+3A50h] BYREF
  _BYTE v1118[32]; // [rsp+3B70h] [rbp+3A70h] BYREF
  _BYTE v1119[32]; // [rsp+3B90h] [rbp+3A90h] BYREF
  _QWORD v1120[4]; // [rsp+3BB0h] [rbp+3AB0h] BYREF
  _QWORD v1121[4]; // [rsp+3BD0h] [rbp+3AD0h] BYREF
  _BYTE v1122[32]; // [rsp+3BF0h] [rbp+3AF0h] BYREF
  _QWORD v1123[4]; // [rsp+3C10h] [rbp+3B10h] BYREF
  _BYTE v1124[32]; // [rsp+3C30h] [rbp+3B30h] BYREF
  _BYTE v1125[32]; // [rsp+3C50h] [rbp+3B50h] BYREF
  _QWORD v1126[4]; // [rsp+3C70h] [rbp+3B70h] BYREF
  _QWORD v1127[4]; // [rsp+3C90h] [rbp+3B90h] BYREF
  _BYTE v1128[32]; // [rsp+3CB0h] [rbp+3BB0h] BYREF
  _QWORD v1129[4]; // [rsp+3CD0h] [rbp+3BD0h] BYREF
  _BYTE v1130[32]; // [rsp+3CF0h] [rbp+3BF0h] BYREF
  _BYTE v1131[32]; // [rsp+3D10h] [rbp+3C10h] BYREF
  _QWORD v1132[4]; // [rsp+3D30h] [rbp+3C30h] BYREF
  _QWORD v1133[4]; // [rsp+3D50h] [rbp+3C50h] BYREF
  _BYTE v1134[32]; // [rsp+3D70h] [rbp+3C70h] BYREF
  _QWORD v1135[4]; // [rsp+3D90h] [rbp+3C90h] BYREF
  _BYTE v1136[32]; // [rsp+3DB0h] [rbp+3CB0h] BYREF
  _BYTE v1137[32]; // [rsp+3DD0h] [rbp+3CD0h] BYREF
  _QWORD v1138[4]; // [rsp+3DF0h] [rbp+3CF0h] BYREF
  _QWORD v1139[4]; // [rsp+3E10h] [rbp+3D10h] BYREF
  _BYTE v1140[32]; // [rsp+3E30h] [rbp+3D30h] BYREF
  _QWORD v1141[4]; // [rsp+3E50h] [rbp+3D50h] BYREF
  _BYTE v1142[32]; // [rsp+3E70h] [rbp+3D70h] BYREF
  _BYTE v1143[32]; // [rsp+3E90h] [rbp+3D90h] BYREF
  _QWORD v1144[4]; // [rsp+3EB0h] [rbp+3DB0h] BYREF
  _QWORD v1145[4]; // [rsp+3ED0h] [rbp+3DD0h] BYREF
  _BYTE v1146[32]; // [rsp+3EF0h] [rbp+3DF0h] BYREF
  _QWORD v1147[4]; // [rsp+3F10h] [rbp+3E10h] BYREF
  _BYTE v1148[32]; // [rsp+3F30h] [rbp+3E30h] BYREF
  _BYTE v1149[32]; // [rsp+3F50h] [rbp+3E50h] BYREF
  _QWORD v1150[4]; // [rsp+3F70h] [rbp+3E70h] BYREF
  _QWORD v1151[4]; // [rsp+3F90h] [rbp+3E90h] BYREF
  _BYTE v1152[32]; // [rsp+3FB0h] [rbp+3EB0h] BYREF
  _QWORD v1153[4]; // [rsp+3FD0h] [rbp+3ED0h] BYREF
  _BYTE v1154[32]; // [rsp+3FF0h] [rbp+3EF0h] BYREF
  _BYTE v1155[32]; // [rsp+4010h] [rbp+3F10h] BYREF
  _QWORD v1156[4]; // [rsp+4030h] [rbp+3F30h] BYREF

  v0 = (unsigned int)TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( dword_1801CDE00 > *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE00);
    if ( dword_1801CDE00 == -1 )
    {
      *(_QWORD *)&v517 = &unk_180137B80;
      *((_QWORD *)&v517 + 1) = &unk_1801389F0;
      *(_QWORD *)&v518 = 0x100000005LL;
      v2 = sub_18009EAF0();
      v3 = sub_180075CF8(v905, 0LL, (__int64)v2, 6);
      v4 = sub_18001C928((__int64)v902, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v3);
      v5 = sub_18001C87C((__int64)v773, v4, (__int64)"/Pixel");
      v515 = v517;
      v516 = v518;
      sub_180075D94(v5, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE00);
    }
  }
  if ( dword_1801CDE04 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE04);
    if ( dword_1801CDE04 == -1 )
    {
      *(_QWORD *)&v519 = &unk_1801389F0;
      *((_QWORD *)&v519 + 1) = &unk_180139A98;
      *(_QWORD *)&v520 = 0x100000005LL;
      v6 = sub_18009EAF0();
      v7 = sub_180075CF8(v911, 1LL, (__int64)v6, 6);
      v8 = sub_18001C928((__int64)v908, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v7);
      v9 = sub_18001C87C((__int64)v776, v8, (__int64)"/Pixel");
      v515 = v519;
      v516 = v520;
      sub_180075D94(v9, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE04);
    }
  }
  if ( dword_1801CDE08 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE08);
    if ( dword_1801CDE08 == -1 )
    {
      *(_QWORD *)&v521 = &unk_180136B90;
      *((_QWORD *)&v521 + 1) = &unk_180137B74;
      *(_QWORD *)&v522 = 0x100000005LL;
      v10 = sub_18009EAF0();
      v11 = sub_180075CF8(v917, 2LL, (__int64)v10, 6);
      v12 = sub_18001C928((__int64)v914, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v11);
      v13 = sub_18001C87C((__int64)v779, v12, (__int64)"/Pixel");
      v515 = v521;
      v516 = v522;
      sub_180075D94(v13, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE08);
    }
  }
  if ( dword_1801CDE0C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE0C);
    if ( dword_1801CDE0C == -1 )
    {
      *(_QWORD *)&v523 = &unk_1801336B0;
      *((_QWORD *)&v523 + 1) = &unk_1801348C0;
      *(_QWORD *)&v524 = 0x100000005LL;
      v14 = sub_18009EAF0();
      v15 = sub_180075CF8(v923, 3LL, (__int64)v14, 6);
      v16 = sub_18001C928((__int64)v920, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v15);
      v17 = sub_18001C87C((__int64)v782, v16, (__int64)"/Pixel");
      v515 = v523;
      v516 = v524;
      sub_180075D94(v17, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE0C);
    }
  }
  if ( dword_1801CDE10 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE10);
    if ( dword_1801CDE10 == -1 )
    {
      *(_QWORD *)&v525 = &unk_180137B80;
      *((_QWORD *)&v525 + 1) = &unk_1801389F0;
      *(_QWORD *)&v526 = 0x100000005LL;
      v18 = sub_18009EAF0();
      v19 = sub_180075CF8(v929, 4LL, (__int64)v18, 6);
      v20 = sub_18001C928((__int64)v926, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v19);
      v21 = sub_18001C87C((__int64)v785, v20, (__int64)"/Pixel");
      v515 = v525;
      v516 = v526;
      sub_180075D94(v21, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE10);
    }
  }
  if ( dword_1801CDE14 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE14);
    if ( dword_1801CDE14 == -1 )
    {
      *(_QWORD *)&v527 = &unk_1801389F0;
      *((_QWORD *)&v527 + 1) = &unk_180139A98;
      *(_QWORD *)&v528 = 0x100000005LL;
      v22 = sub_18009EAF0();
      v23 = sub_180075CF8(v935, 5LL, (__int64)v22, 6);
      v24 = sub_18001C928((__int64)v932, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v23);
      v25 = sub_18001C87C((__int64)v788, v24, (__int64)"/Pixel");
      v515 = v527;
      v516 = v528;
      sub_180075D94(v25, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE14);
    }
  }
  if ( dword_1801CDE18 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE18);
    if ( dword_1801CDE18 == -1 )
    {
      *(_QWORD *)&v529 = &unk_180136B90;
      *((_QWORD *)&v529 + 1) = &unk_180137B74;
      *(_QWORD *)&v530 = 0x100000005LL;
      v26 = sub_18009EAF0();
      v27 = sub_180075CF8(v941, 6LL, (__int64)v26, 6);
      v28 = sub_18001C928((__int64)v938, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v27);
      v29 = sub_18001C87C((__int64)v791, v28, (__int64)"/Pixel");
      v515 = v529;
      v516 = v530;
      sub_180075D94(v29, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE18);
    }
  }
  if ( dword_1801CDE1C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE1C);
    if ( dword_1801CDE1C == -1 )
    {
      *(_QWORD *)&v531 = &unk_1801336B0;
      *((_QWORD *)&v531 + 1) = &unk_1801348C0;
      *(_QWORD *)&v532 = 0x100000005LL;
      v30 = sub_18009EAF0();
      v31 = sub_180075CF8(v947, 7LL, (__int64)v30, 6);
      v32 = sub_18001C928((__int64)v944, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v31);
      v33 = sub_18001C87C((__int64)v794, v32, (__int64)"/Pixel");
      v515 = v531;
      v516 = v532;
      sub_180075D94(v33, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE1C);
    }
  }
  if ( dword_1801CDE20 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE20);
    if ( dword_1801CDE20 == -1 )
    {
      *(_QWORD *)&v533 = &unk_1801316C0;
      *((_QWORD *)&v533 + 1) = &unk_180132574;
      *(_QWORD *)&v534 = 0x100000005LL;
      v34 = sub_18009EAF0();
      v35 = sub_180075CF8(v953, 8LL, (__int64)v34, 6);
      v36 = sub_18001C928((__int64)v950, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v35);
      v37 = sub_18001C87C((__int64)v797, v36, (__int64)"/Pixel");
      v515 = v533;
      v516 = v534;
      sub_180075D94(v37, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE20);
    }
  }
  if ( dword_1801CDE24 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE24);
    if ( dword_1801CDE24 == -1 )
    {
      *(_QWORD *)&v535 = &unk_180132580;
      *((_QWORD *)&v535 + 1) = &unk_1801336B0;
      *(_QWORD *)&v536 = 0x100000005LL;
      v38 = sub_18009EAF0();
      v39 = sub_180075CF8(v959, 9LL, (__int64)v38, 6);
      v40 = sub_18001C928((__int64)v956, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v39);
      v41 = sub_18001C87C((__int64)v800, v40, (__int64)"/Pixel");
      v515 = v535;
      v516 = v536;
      sub_180075D94(v41, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE24);
    }
  }
  if ( dword_1801CDE28 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE28);
    if ( dword_1801CDE28 == -1 )
    {
      *(_QWORD *)&v537 = &unk_180135B40;
      *((_QWORD *)&v537 + 1) = &unk_180136B90;
      *(_QWORD *)&v538 = 0x100000005LL;
      v42 = sub_18009EAF0();
      v43 = sub_180075CF8(v965, 10LL, (__int64)v42, 6);
      v44 = sub_18001C928((__int64)v962, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v43);
      v45 = sub_18001C87C((__int64)v803, v44, (__int64)"/Pixel");
      v515 = v537;
      v516 = v538;
      sub_180075D94(v45, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE28);
    }
  }
  if ( dword_1801CDE2C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE2C);
    if ( dword_1801CDE2C == -1 )
    {
      *(_QWORD *)&v539 = &unk_1801348C0;
      *((_QWORD *)&v539 + 1) = &unk_180135B3C;
      *(_QWORD *)&v540 = 0x100000005LL;
      v46 = sub_18009EAF0();
      v47 = sub_180075CF8(v971, 11LL, (__int64)v46, 6);
      v48 = sub_18001C928((__int64)v968, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v47);
      v49 = sub_18001C87C((__int64)v806, v48, (__int64)"/Pixel");
      v515 = v539;
      v516 = v540;
      sub_180075D94(v49, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE2C);
    }
  }
  if ( dword_1801CDE30 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE30);
    if ( dword_1801CDE30 == -1 )
    {
      *(_QWORD *)&v541 = &unk_1801316C0;
      *((_QWORD *)&v541 + 1) = &unk_180132574;
      *(_QWORD *)&v542 = 0x100000005LL;
      v50 = sub_18009EAF0();
      v51 = sub_180075CF8(v977, 12LL, (__int64)v50, 6);
      v52 = sub_18001C928((__int64)v974, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v51);
      v53 = sub_18001C87C((__int64)v809, v52, (__int64)"/Pixel");
      v515 = v541;
      v516 = v542;
      sub_180075D94(v53, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE30);
    }
  }
  if ( dword_1801CDE34 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE34);
    if ( dword_1801CDE34 == -1 )
    {
      *(_QWORD *)&v543 = &unk_180132580;
      *((_QWORD *)&v543 + 1) = &unk_1801336B0;
      *(_QWORD *)&v544 = 0x100000005LL;
      v54 = sub_18009EAF0();
      v55 = sub_180075CF8(v983, 13LL, (__int64)v54, 6);
      v56 = sub_18001C928((__int64)v980, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v55);
      v57 = sub_18001C87C((__int64)v812, v56, (__int64)"/Pixel");
      v515 = v543;
      v516 = v544;
      sub_180075D94(v57, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE34);
    }
  }
  if ( dword_1801CDE38 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE38);
    if ( dword_1801CDE38 == -1 )
    {
      *(_QWORD *)&v545 = &unk_180135B40;
      *((_QWORD *)&v545 + 1) = &unk_180136B90;
      *(_QWORD *)&v546 = 0x100000005LL;
      v58 = sub_18009EAF0();
      v59 = sub_180075CF8(v989, 14LL, (__int64)v58, 6);
      v60 = sub_18001C928((__int64)v986, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v59);
      v61 = sub_18001C87C((__int64)v815, v60, (__int64)"/Pixel");
      v515 = v545;
      v516 = v546;
      sub_180075D94(v61, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE38);
    }
  }
  if ( dword_1801CDE3C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE3C);
    if ( dword_1801CDE3C == -1 )
    {
      *(_QWORD *)&v547 = &unk_1801348C0;
      *((_QWORD *)&v547 + 1) = &unk_180135B3C;
      *(_QWORD *)&v548 = 0x100000005LL;
      v62 = sub_18009EAF0();
      v63 = sub_180075CF8(v995, 15LL, (__int64)v62, 6);
      v64 = sub_18001C928((__int64)v992, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v63);
      v65 = sub_18001C87C((__int64)v777, v64, (__int64)"/Pixel");
      v515 = v547;
      v516 = v548;
      sub_180075D94(v65, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE3C);
    }
  }
  if ( dword_1801CDE40 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE40);
    if ( dword_1801CDE40 == -1 )
    {
      *(_QWORD *)&v549 = &unk_18012C210;
      *((_QWORD *)&v549 + 1) = &unk_18012D13C;
      *(_QWORD *)&v550 = 0x100000005LL;
      v66 = sub_18009EAF0();
      v67 = sub_180075CF8(v1001, 16LL, (__int64)v66, 6);
      v68 = sub_18001C928((__int64)v998, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v67);
      v69 = sub_18001C87C((__int64)v781, v68, (__int64)"/Pixel");
      v515 = v549;
      v516 = v550;
      sub_180075D94(v69, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE40);
    }
  }
  if ( dword_1801CDE44 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE44);
    if ( dword_1801CDE44 == -1 )
    {
      *(_QWORD *)&v551 = &unk_18012D140;
      *((_QWORD *)&v551 + 1) = &unk_18012E298;
      *(_QWORD *)&v552 = 0x100000005LL;
      v70 = sub_18009EAF0();
      v71 = sub_180075CF8(v1007, 17LL, (__int64)v70, 6);
      v72 = sub_18001C928((__int64)v1004, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v71);
      v73 = sub_18001C87C((__int64)v786, v72, (__int64)"/Pixel");
      v515 = v551;
      v516 = v552;
      sub_180075D94(v73, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE44);
    }
  }
  if ( dword_1801CDE48 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE48);
    if ( dword_1801CDE48 == -1 )
    {
      *(_QWORD *)&v553 = &unk_18012B170;
      *((_QWORD *)&v553 + 1) = &unk_18012C204;
      *(_QWORD *)&v554 = 0x100000005LL;
      v74 = sub_18009EAF0();
      v75 = sub_180075CF8(v1013, 18LL, (__int64)v74, 6);
      v76 = sub_18001C928((__int64)v1010, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v75);
      v77 = sub_18001C87C((__int64)v790, v76, (__int64)"/Pixel");
      v515 = v553;
      v516 = v554;
      sub_180075D94(v77, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE48);
    }
  }
  if ( dword_1801CDE4C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE4C);
    if ( dword_1801CDE4C == -1 )
    {
      *(_QWORD *)&v555 = &unk_180130400;
      *((_QWORD *)&v555 + 1) = &unk_1801316C0;
      *(_QWORD *)&v556 = 0x100000005LL;
      v78 = sub_18009EAF0();
      v79 = sub_180075CF8(v1019, 19LL, (__int64)v78, 6);
      v80 = sub_18001C928((__int64)v1016, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v79);
      v81 = sub_18001C87C((__int64)v795, v80, (__int64)"/Pixel");
      v515 = v555;
      v516 = v556;
      sub_180075D94(v81, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE4C);
    }
  }
  if ( dword_1801CDE50 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE50);
    if ( dword_1801CDE50 == -1 )
    {
      *(_QWORD *)&v557 = &unk_18012C210;
      *((_QWORD *)&v557 + 1) = &unk_18012D13C;
      *(_QWORD *)&v558 = 0x100000005LL;
      v82 = sub_18009EAF0();
      v83 = sub_180075CF8(v1025, 20LL, (__int64)v82, 6);
      v84 = sub_18001C928((__int64)v1022, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v83);
      v85 = sub_18001C87C((__int64)v799, v84, (__int64)"/Pixel");
      v515 = v557;
      v516 = v558;
      sub_180075D94(v85, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE50);
    }
  }
  if ( dword_1801CDE54 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE54);
    if ( dword_1801CDE54 == -1 )
    {
      *(_QWORD *)&v559 = &unk_18012D140;
      *((_QWORD *)&v559 + 1) = &unk_18012E298;
      *(_QWORD *)&v560 = 0x100000005LL;
      v86 = sub_18009EAF0();
      v87 = sub_180075CF8(v1031, 21LL, (__int64)v86, 6);
      v88 = sub_18001C928((__int64)v1028, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v87);
      v89 = sub_18001C87C((__int64)v804, v88, (__int64)"/Pixel");
      v515 = v559;
      v516 = v560;
      sub_180075D94(v89, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE54);
    }
  }
  if ( dword_1801CDE58 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE58);
    if ( dword_1801CDE58 == -1 )
    {
      *(_QWORD *)&v561 = &unk_18012B170;
      *((_QWORD *)&v561 + 1) = &unk_18012C204;
      *(_QWORD *)&v562 = 0x100000005LL;
      v90 = sub_18009EAF0();
      v91 = sub_180075CF8(v1037, 22LL, (__int64)v90, 6);
      v92 = sub_18001C928((__int64)v1034, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v91);
      v93 = sub_18001C87C((__int64)v808, v92, (__int64)"/Pixel");
      v515 = v561;
      v516 = v562;
      sub_180075D94(v93, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE58);
    }
  }
  if ( dword_1801CDE5C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE5C);
    if ( dword_1801CDE5C == -1 )
    {
      *(_QWORD *)&v563 = &unk_180130400;
      *((_QWORD *)&v563 + 1) = &unk_1801316C0;
      *(_QWORD *)&v564 = 0x100000005LL;
      v94 = sub_18009EAF0();
      v95 = sub_180075CF8(v1043, 23LL, (__int64)v94, 6);
      v96 = sub_18001C928((__int64)v1040, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v95);
      v97 = sub_18001C87C((__int64)v813, v96, (__int64)"/Pixel");
      v515 = v563;
      v516 = v564;
      sub_180075D94(v97, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE5C);
    }
  }
  if ( dword_1801CDE60 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE60);
    if ( dword_1801CDE60 == -1 )
    {
      *(_QWORD *)&v565 = &unk_18012E2A0;
      *((_QWORD *)&v565 + 1) = &unk_18012F210;
      *(_QWORD *)&v566 = 0x100000005LL;
      v98 = sub_18009EAF0();
      v99 = sub_180075CF8(v1049, 24LL, (__int64)v98, 6);
      v100 = sub_18001C928((__int64)v1046, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v99);
      v101 = sub_18001C87C((__int64)v775, v100, (__int64)"/Pixel");
      v515 = v565;
      v516 = v566;
      sub_180075D94(v101, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE60);
    }
  }
  if ( dword_1801CDE64 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE64);
    if ( dword_1801CDE64 == -1 )
    {
      *(_QWORD *)&v567 = &unk_18012F210;
      *((_QWORD *)&v567 + 1) = &unk_1801303FC;
      *(_QWORD *)&v568 = 0x100000005LL;
      v102 = sub_18009EAF0();
      v103 = sub_180075CF8(v1055, 25LL, (__int64)v102, 6);
      v104 = sub_18001C928((__int64)v1052, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v103);
      v105 = sub_18001C87C((__int64)v783, v104, (__int64)"/Pixel");
      v515 = v567;
      v516 = v568;
      sub_180075D94(v105, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE64);
    }
  }
  if ( dword_1801CDE68 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE68);
    if ( dword_1801CDE68 == -1 )
    {
      *(_QWORD *)&v569 = &unk_180126B10;
      *((_QWORD *)&v569 + 1) = &unk_180127C1C;
      *(_QWORD *)&v570 = 0x100000005LL;
      v106 = sub_18009EAF0();
      v107 = sub_180075CF8(v1061, 26LL, (__int64)v106, 6);
      v108 = sub_18001C928((__int64)v1058, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v107);
      v109 = sub_18001C87C((__int64)v789, v108, (__int64)"/Pixel");
      v515 = v569;
      v516 = v570;
      sub_180075D94(v109, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE68);
    }
  }
  if ( dword_1801CDE6C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE6C);
    if ( dword_1801CDE6C == -1 )
    {
      *(_QWORD *)&v571 = &unk_1801257D0;
      *((_QWORD *)&v571 + 1) = &unk_180126B08;
      *(_QWORD *)&v572 = 0x100000005LL;
      v110 = sub_18009EAF0();
      v111 = sub_180075CF8(v1067, 27LL, (__int64)v110, 6);
      v112 = sub_18001C928((__int64)v1064, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v111);
      v113 = sub_18001C87C((__int64)v796, v112, (__int64)"/Pixel");
      v515 = v571;
      v516 = v572;
      sub_180075D94(v113, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE6C);
    }
  }
  if ( dword_1801CDE70 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE70);
    if ( dword_1801CDE70 == -1 )
    {
      *(_QWORD *)&v573 = &unk_18012E2A0;
      *((_QWORD *)&v573 + 1) = &unk_18012F210;
      *(_QWORD *)&v574 = 0x100000005LL;
      v114 = sub_18009EAF0();
      v115 = sub_180075CF8(v1073, 28LL, (__int64)v114, 6);
      v116 = sub_18001C928((__int64)v1070, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v115);
      v117 = sub_18001C87C((__int64)v802, v116, (__int64)"/Pixel");
      v515 = v573;
      v516 = v574;
      sub_180075D94(v117, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE70);
    }
  }
  if ( dword_1801CDE74 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE74);
    if ( dword_1801CDE74 == -1 )
    {
      *(_QWORD *)&v575 = &unk_18012F210;
      *((_QWORD *)&v575 + 1) = &unk_1801303FC;
      *(_QWORD *)&v576 = 0x100000005LL;
      v118 = sub_18009EAF0();
      v119 = sub_180075CF8(v1079, 29LL, (__int64)v118, 6);
      v120 = sub_18001C928((__int64)v1076, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v119);
      v121 = sub_18001C87C((__int64)v810, v120, (__int64)"/Pixel");
      v515 = v575;
      v516 = v576;
      sub_180075D94(v121, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE74);
    }
  }
  if ( dword_1801CDE78 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE78);
    if ( dword_1801CDE78 == -1 )
    {
      *(_QWORD *)&v577 = &unk_180126B10;
      *((_QWORD *)&v577 + 1) = &unk_180127C1C;
      *(_QWORD *)&v578 = 0x100000005LL;
      v122 = sub_18009EAF0();
      v123 = sub_180075CF8(v1085, 30LL, (__int64)v122, 6);
      v124 = sub_18001C928((__int64)v1082, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v123);
      v125 = sub_18001C87C((__int64)v774, v124, (__int64)"/Pixel");
      v515 = v577;
      v516 = v578;
      sub_180075D94(v125, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE78);
    }
  }
  if ( dword_1801CDE7C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE7C);
    if ( dword_1801CDE7C == -1 )
    {
      *(_QWORD *)&v579 = &unk_1801257D0;
      *((_QWORD *)&v579 + 1) = &unk_180126B08;
      *(_QWORD *)&v580 = 0x100000005LL;
      v126 = sub_18009EAF0();
      v127 = sub_180075CF8(v1091, 31LL, (__int64)v126, 6);
      v128 = sub_18001C928((__int64)v1088, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v127);
      v129 = sub_18001C87C((__int64)v784, v128, (__int64)"/Pixel");
      v515 = v579;
      v516 = v580;
      sub_180075D94(v129, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE7C);
    }
  }
  if ( dword_1801CDE80 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE80);
    if ( dword_1801CDE80 == -1 )
    {
      *(_QWORD *)&v581 = &unk_180128E20;
      *((_QWORD *)&v581 + 1) = &unk_180129EAC;
      *(_QWORD *)&v582 = 0x100000005LL;
      v130 = sub_18009EAF0();
      v131 = sub_180075CF8(v1097, 32LL, (__int64)v130, 6);
      v132 = sub_18001C928((__int64)v1094, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v131);
      v133 = sub_18001C87C((__int64)v793, v132, (__int64)"/Pixel");
      v515 = v581;
      v516 = v582;
      sub_180075D94(v133, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE80);
    }
  }
  if ( dword_1801CDE84 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE84);
    if ( dword_1801CDE84 == -1 )
    {
      *(_QWORD *)&v583 = &unk_180129EB0;
      *((_QWORD *)&v583 + 1) = &unk_18012B168;
      *(_QWORD *)&v584 = 0x100000005LL;
      v134 = sub_18009EAF0();
      v135 = sub_180075CF8(v1103, 33LL, (__int64)v134, 6);
      v136 = sub_18001C928((__int64)v1100, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v135);
      v137 = sub_18001C87C((__int64)v805, v136, (__int64)"/Pixel");
      v515 = v583;
      v516 = v584;
      sub_180075D94(v137, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE84);
    }
  }
  if ( dword_1801CDE88 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE88);
    if ( dword_1801CDE88 == -1 )
    {
      *(_QWORD *)&v585 = &unk_180127C20;
      *((_QWORD *)&v585 + 1) = &unk_180128E14;
      *(_QWORD *)&v586 = 0x100000005LL;
      v138 = sub_18009EAF0();
      v139 = sub_180075CF8(v1109, 34LL, (__int64)v138, 6);
      v140 = sub_18001C928((__int64)v1106, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v139);
      v141 = sub_18001C87C((__int64)v814, v140, (__int64)"/Pixel");
      v515 = v585;
      v516 = v586;
      sub_180075D94(v141, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE88);
    }
  }
  if ( dword_1801CDE8C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE8C);
    if ( dword_1801CDE8C == -1 )
    {
      *(_QWORD *)&v587 = &unk_180121CA0;
      *((_QWORD *)&v587 + 1) = &unk_1801230C0;
      *(_QWORD *)&v588 = 0x100000005LL;
      v142 = sub_18009EAF0();
      v143 = sub_180075CF8(v1115, 35LL, (__int64)v142, 6);
      v144 = sub_18001C928((__int64)v1112, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v143);
      v145 = sub_18001C87C((__int64)v787, v144, (__int64)"/Pixel");
      v515 = v587;
      v516 = v588;
      sub_180075D94(v145, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE8C);
    }
  }
  if ( dword_1801CDE90 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE90);
    if ( dword_1801CDE90 == -1 )
    {
      *(_QWORD *)&v589 = &unk_180128E20;
      *((_QWORD *)&v589 + 1) = &unk_180129EAC;
      *(_QWORD *)&v590 = 0x100000005LL;
      v146 = sub_18009EAF0();
      v147 = sub_180075CF8(v1121, 36LL, (__int64)v146, 6);
      v148 = sub_18001C928((__int64)v1118, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v147);
      v149 = sub_18001C87C((__int64)v801, v148, (__int64)"/Pixel");
      v515 = v589;
      v516 = v590;
      sub_180075D94(v149, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE90);
    }
  }
  if ( dword_1801CDE94 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE94);
    if ( dword_1801CDE94 == -1 )
    {
      *(_QWORD *)&v591 = &unk_180129EB0;
      *((_QWORD *)&v591 + 1) = &unk_18012B168;
      *(_QWORD *)&v592 = 0x100000005LL;
      v150 = sub_18009EAF0();
      v151 = sub_180075CF8(v1127, 37LL, (__int64)v150, 6);
      v152 = sub_18001C928((__int64)v1124, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v151);
      v153 = sub_18001C87C((__int64)v778, v152, (__int64)"/Pixel");
      v515 = v591;
      v516 = v592;
      sub_180075D94(v153, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE94);
    }
  }
  if ( dword_1801CDE98 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE98);
    if ( dword_1801CDE98 == -1 )
    {
      *(_QWORD *)&v593 = &unk_180127C20;
      *((_QWORD *)&v593 + 1) = &unk_180128E14;
      *(_QWORD *)&v594 = 0x100000005LL;
      v154 = sub_18009EAF0();
      v155 = sub_180075CF8(v1133, 38LL, (__int64)v154, 6);
      v156 = sub_18001C928((__int64)v1130, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v155);
      v157 = sub_18001C87C((__int64)v798, v156, (__int64)"/Pixel");
      v515 = v593;
      v516 = v594;
      sub_180075D94(v157, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE98);
    }
  }
  if ( dword_1801CDE9C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDE9C);
    if ( dword_1801CDE9C == -1 )
    {
      *(_QWORD *)&v595 = &unk_180121CA0;
      *((_QWORD *)&v595 + 1) = &unk_1801230C0;
      *(_QWORD *)&v596 = 0x100000005LL;
      v158 = sub_18009EAF0();
      v159 = sub_180075CF8(v1139, 39LL, (__int64)v158, 6);
      v160 = sub_18001C928((__int64)v1136, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v159);
      v161 = sub_18001C87C((__int64)v780, v160, (__int64)"/Pixel");
      v515 = v595;
      v516 = v596;
      sub_180075D94(v161, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDE9C);
    }
  }
  if ( dword_1801CDEA0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEA0);
    if ( dword_1801CDEA0 == -1 )
    {
      *(_QWORD *)&v597 = &unk_18011F880;
      *((_QWORD *)&v597 + 1) = &unk_180120950;
      *(_QWORD *)&v598 = 0x100000005LL;
      v162 = sub_18009EAF0();
      v163 = sub_180075CF8(v1145, 40LL, (__int64)v162, 6);
      v164 = sub_18001C928((__int64)v1142, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v163);
      v165 = sub_18001C87C((__int64)v811, v164, (__int64)"/Pixel");
      v515 = v597;
      v516 = v598;
      sub_180075D94(v165, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEA0);
    }
  }
  if ( dword_1801CDEA4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEA4);
    if ( dword_1801CDEA4 == -1 )
    {
      *(_QWORD *)&v599 = &unk_180120950;
      *((_QWORD *)&v599 + 1) = &unk_180121C9C;
      *(_QWORD *)&v600 = 0x100000005LL;
      v166 = sub_18009EAF0();
      v167 = sub_180075CF8(v1151, 41LL, (__int64)v166, 6);
      v168 = sub_18001C928((__int64)v1148, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v167);
      v169 = sub_18001C87C((__int64)v792, v168, (__int64)"/Pixel");
      v515 = v599;
      v516 = v600;
      sub_180075D94(v169, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEA4);
    }
  }
  if ( dword_1801CDEA8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEA8);
    if ( dword_1801CDEA8 == -1 )
    {
      *(_QWORD *)&v601 = &unk_180124560;
      *((_QWORD *)&v601 + 1) = &unk_1801257CC;
      *(_QWORD *)&v602 = 0x100000005LL;
      v170 = sub_18009EAF0();
      v171 = sub_180075CF8(v901, 42LL, (__int64)v170, 6);
      v172 = sub_18001C928((__int64)v1154, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v171);
      v173 = sub_18001C87C((__int64)v807, v172, (__int64)"/Pixel");
      v515 = v601;
      v516 = v602;
      sub_180075D94(v173, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEA8);
    }
  }
  if ( dword_1801CDEAC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEAC);
    if ( dword_1801CDEAC == -1 )
    {
      *(_QWORD *)&v603 = &unk_1801230C0;
      *((_QWORD *)&v603 + 1) = &unk_180124558;
      *(_QWORD *)&v604 = 0x100000005LL;
      v174 = sub_18009EAF0();
      v175 = sub_180075CF8(v904, 43LL, (__int64)v174, 6);
      v176 = sub_18001C928((__int64)v903, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v175);
      v177 = sub_18001C87C((__int64)v816, v176, (__int64)"/Pixel");
      v515 = v603;
      v516 = v604;
      sub_180075D94(v177, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEAC);
    }
  }
  if ( dword_1801CDEB0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEB0);
    if ( dword_1801CDEB0 == -1 )
    {
      *(_QWORD *)&v605 = &unk_18011F880;
      *((_QWORD *)&v605 + 1) = &unk_180120950;
      *(_QWORD *)&v606 = 0x100000005LL;
      v178 = sub_18009EAF0();
      v179 = sub_180075CF8(v907, 44LL, (__int64)v178, 6);
      v180 = sub_18001C928((__int64)v906, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v179);
      v181 = sub_18001C87C((__int64)v817, v180, (__int64)"/Pixel");
      v515 = v605;
      v516 = v606;
      sub_180075D94(v181, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEB0);
    }
  }
  if ( dword_1801CDEB4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEB4);
    if ( dword_1801CDEB4 == -1 )
    {
      *(_QWORD *)&v607 = &unk_180120950;
      *((_QWORD *)&v607 + 1) = &unk_180121C9C;
      *(_QWORD *)&v608 = 0x100000005LL;
      v182 = sub_18009EAF0();
      v183 = sub_180075CF8(v910, 45LL, (__int64)v182, 6);
      v184 = sub_18001C928((__int64)v909, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v183);
      v185 = sub_18001C87C((__int64)v818, v184, (__int64)"/Pixel");
      v515 = v607;
      v516 = v608;
      sub_180075D94(v185, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEB4);
    }
  }
  if ( dword_1801CDEB8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEB8);
    if ( dword_1801CDEB8 == -1 )
    {
      *(_QWORD *)&v609 = &unk_180124560;
      *((_QWORD *)&v609 + 1) = &unk_1801257CC;
      *(_QWORD *)&v610 = 0x100000005LL;
      v186 = sub_18009EAF0();
      v187 = sub_180075CF8(v913, 46LL, (__int64)v186, 6);
      v188 = sub_18001C928((__int64)v912, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v187);
      v189 = sub_18001C87C((__int64)v819, v188, (__int64)"/Pixel");
      v515 = v609;
      v516 = v610;
      sub_180075D94(v189, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEB8);
    }
  }
  if ( dword_1801CDEBC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEBC);
    if ( dword_1801CDEBC == -1 )
    {
      *(_QWORD *)&v611 = &unk_1801230C0;
      *((_QWORD *)&v611 + 1) = &unk_180124558;
      *(_QWORD *)&v612 = 0x100000005LL;
      v190 = sub_18009EAF0();
      v191 = sub_180075CF8(v916, 47LL, (__int64)v190, 6);
      v192 = sub_18001C928((__int64)v915, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v191);
      v193 = sub_18001C87C((__int64)v820, v192, (__int64)"/Pixel");
      v515 = v611;
      v516 = v612;
      sub_180075D94(v193, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEBC);
    }
  }
  if ( dword_1801CDEC0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEC0);
    if ( dword_1801CDEC0 == -1 )
    {
      *(_QWORD *)&v613 = &unk_180119980;
      *((_QWORD *)&v613 + 1) = &unk_18011AABC;
      *(_QWORD *)&v614 = 0x100000005LL;
      v194 = sub_18009EAF0();
      v195 = sub_180075CF8(v919, 48LL, (__int64)v194, 6);
      v196 = sub_18001C928((__int64)v918, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v195);
      v197 = sub_18001C87C((__int64)v821, v196, (__int64)"/Pixel");
      v515 = v613;
      v516 = v614;
      sub_180075D94(v197, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEC0);
    }
  }
  if ( dword_1801CDEC4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEC4);
    if ( dword_1801CDEC4 == -1 )
    {
      *(_QWORD *)&v615 = &unk_18011AAC0;
      *((_QWORD *)&v615 + 1) = &unk_18011BE28;
      *(_QWORD *)&v616 = 0x100000005LL;
      v198 = sub_18009EAF0();
      v199 = sub_180075CF8(v922, 49LL, (__int64)v198, 6);
      v200 = sub_18001C928((__int64)v921, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v199);
      v201 = sub_18001C87C((__int64)v822, v200, (__int64)"/Pixel");
      v515 = v615;
      v516 = v616;
      sub_180075D94(v201, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEC4);
    }
  }
  if ( dword_1801CDEC8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEC8);
    if ( dword_1801CDEC8 == -1 )
    {
      *(_QWORD *)&v617 = &unk_1801186D0;
      *((_QWORD *)&v617 + 1) = &unk_180119974;
      *(_QWORD *)&v618 = 0x100000005LL;
      v202 = sub_18009EAF0();
      v203 = sub_180075CF8(v925, 50LL, (__int64)v202, 6);
      v204 = sub_18001C928((__int64)v924, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v203);
      v205 = sub_18001C87C((__int64)v823, v204, (__int64)"/Pixel");
      v515 = v617;
      v516 = v618;
      sub_180075D94(v205, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEC8);
    }
  }
  if ( dword_1801CDECC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDECC);
    if ( dword_1801CDECC == -1 )
    {
      *(_QWORD *)&v619 = &unk_18011E3B0;
      *((_QWORD *)&v619 + 1) = &unk_18011F880;
      *(_QWORD *)&v620 = 0x100000005LL;
      v206 = sub_18009EAF0();
      v207 = sub_180075CF8(v928, 51LL, (__int64)v206, 6);
      v208 = sub_18001C928((__int64)v927, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v207);
      v209 = sub_18001C87C((__int64)v824, v208, (__int64)"/Pixel");
      v515 = v619;
      v516 = v620;
      sub_180075D94(v209, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDECC);
    }
  }
  if ( dword_1801CDED0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDED0);
    if ( dword_1801CDED0 == -1 )
    {
      *(_QWORD *)&v621 = &unk_180119980;
      *((_QWORD *)&v621 + 1) = &unk_18011AABC;
      *(_QWORD *)&v622 = 0x100000005LL;
      v210 = sub_18009EAF0();
      v211 = sub_180075CF8(v931, 52LL, (__int64)v210, 6);
      v212 = sub_18001C928((__int64)v930, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v211);
      v213 = sub_18001C87C((__int64)v825, v212, (__int64)"/Pixel");
      v515 = v621;
      v516 = v622;
      sub_180075D94(v213, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDED0);
    }
  }
  if ( dword_1801CDED4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDED4);
    if ( dword_1801CDED4 == -1 )
    {
      *(_QWORD *)&v623 = &unk_18011AAC0;
      *((_QWORD *)&v623 + 1) = &unk_18011BE28;
      *(_QWORD *)&v624 = 0x100000005LL;
      v214 = sub_18009EAF0();
      v215 = sub_180075CF8(v934, 53LL, (__int64)v214, 6);
      v216 = sub_18001C928((__int64)v933, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v215);
      v217 = sub_18001C87C((__int64)v826, v216, (__int64)"/Pixel");
      v515 = v623;
      v516 = v624;
      sub_180075D94(v217, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDED4);
    }
  }
  if ( dword_1801CDED8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDED8);
    if ( dword_1801CDED8 == -1 )
    {
      *(_QWORD *)&v625 = &unk_1801186D0;
      *((_QWORD *)&v625 + 1) = &unk_180119974;
      *(_QWORD *)&v626 = 0x100000005LL;
      v218 = sub_18009EAF0();
      v219 = sub_180075CF8(v937, 54LL, (__int64)v218, 6);
      v220 = sub_18001C928((__int64)v936, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v219);
      v221 = sub_18001C87C((__int64)v827, v220, (__int64)"/Pixel");
      v515 = v625;
      v516 = v626;
      sub_180075D94(v221, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDED8);
    }
  }
  if ( dword_1801CDEDC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEDC);
    if ( dword_1801CDEDC == -1 )
    {
      *(_QWORD *)&v627 = &unk_18011E3B0;
      *((_QWORD *)&v627 + 1) = &unk_18011F880;
      *(_QWORD *)&v628 = 0x100000005LL;
      v222 = sub_18009EAF0();
      v223 = sub_180075CF8(v940, 55LL, (__int64)v222, 6);
      v224 = sub_18001C928((__int64)v939, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v223);
      v225 = sub_18001C87C((__int64)v828, v224, (__int64)"/Pixel");
      v515 = v627;
      v516 = v628;
      sub_180075D94(v225, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEDC);
    }
  }
  if ( dword_1801CDEE0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEE0);
    if ( dword_1801CDEE0 == -1 )
    {
      *(_QWORD *)&v629 = &unk_18011BE30;
      *((_QWORD *)&v629 + 1) = &unk_18011CFB0;
      *(_QWORD *)&v630 = 0x100000005LL;
      v226 = sub_18009EAF0();
      v227 = sub_180075CF8(v943, 56LL, (__int64)v226, 6);
      v228 = sub_18001C928((__int64)v942, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v227);
      v229 = sub_18001C87C((__int64)v829, v228, (__int64)"/Pixel");
      v515 = v629;
      v516 = v630;
      sub_180075D94(v229, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEE0);
    }
  }
  if ( dword_1801CDEE4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEE4);
    if ( dword_1801CDEE4 == -1 )
    {
      *(_QWORD *)&v631 = &unk_18011CFB0;
      *((_QWORD *)&v631 + 1) = &unk_18011E3AC;
      *(_QWORD *)&v632 = 0x100000005LL;
      v230 = sub_18009EAF0();
      v231 = sub_180075CF8(v946, 57LL, (__int64)v230, 6);
      v232 = sub_18001C928((__int64)v945, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v231);
      v233 = sub_18001C87C((__int64)v830, v232, (__int64)"/Pixel");
      v515 = v631;
      v516 = v632;
      sub_180075D94(v233, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEE4);
    }
  }
  if ( dword_1801CDEE8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEE8);
    if ( dword_1801CDEE8 == -1 )
    {
      *(_QWORD *)&v633 = &unk_180117160;
      *((_QWORD *)&v633 + 1) = &unk_18011847C;
      *(_QWORD *)&v634 = 0x100000005LL;
      v234 = sub_18009EAF0();
      v235 = sub_180075CF8(v949, 58LL, (__int64)v234, 6);
      v236 = sub_18001C928((__int64)v948, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v235);
      v237 = sub_18001C87C((__int64)v831, v236, (__int64)"/Pixel");
      v515 = v633;
      v516 = v634;
      sub_180075D94(v237, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEE8);
    }
  }
  if ( dword_1801CDEEC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEEC);
    if ( dword_1801CDEEC == -1 )
    {
      *(_QWORD *)&v635 = &unk_180115C10;
      *((_QWORD *)&v635 + 1) = &unk_180117158;
      *(_QWORD *)&v636 = 0x100000005LL;
      v238 = sub_18009EAF0();
      v239 = sub_180075CF8(v952, 59LL, (__int64)v238, 6);
      v240 = sub_18001C928((__int64)v951, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v239);
      v241 = sub_18001C87C((__int64)v832, v240, (__int64)"/Pixel");
      v515 = v635;
      v516 = v636;
      sub_180075D94(v241, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEEC);
    }
  }
  if ( dword_1801CDEF0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEF0);
    if ( dword_1801CDEF0 == -1 )
    {
      *(_QWORD *)&v637 = &unk_18011BE30;
      *((_QWORD *)&v637 + 1) = &unk_18011CFB0;
      *(_QWORD *)&v638 = 0x100000005LL;
      v242 = sub_18009EAF0();
      v243 = sub_180075CF8(v955, 60LL, (__int64)v242, 6);
      v244 = sub_18001C928((__int64)v954, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v243);
      v245 = sub_18001C87C((__int64)v833, v244, (__int64)"/Pixel");
      v515 = v637;
      v516 = v638;
      sub_180075D94(v245, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEF0);
    }
  }
  if ( dword_1801CDEF4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEF4);
    if ( dword_1801CDEF4 == -1 )
    {
      *(_QWORD *)&v639 = &unk_18011CFB0;
      *((_QWORD *)&v639 + 1) = &unk_18011E3AC;
      *(_QWORD *)&v640 = 0x100000005LL;
      v246 = sub_18009EAF0();
      v247 = sub_180075CF8(v958, 61LL, (__int64)v246, 6);
      v248 = sub_18001C928((__int64)v957, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v247);
      v249 = sub_18001C87C((__int64)v834, v248, (__int64)"/Pixel");
      v515 = v639;
      v516 = v640;
      sub_180075D94(v249, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEF4);
    }
  }
  if ( dword_1801CDEF8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEF8);
    if ( dword_1801CDEF8 == -1 )
    {
      *(_QWORD *)&v641 = &unk_180117160;
      *((_QWORD *)&v641 + 1) = &unk_18011847C;
      *(_QWORD *)&v642 = 0x100000005LL;
      v250 = sub_18009EAF0();
      v251 = sub_180075CF8(v961, 62LL, (__int64)v250, 6);
      v252 = sub_18001C928((__int64)v960, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v251);
      v253 = sub_18001C87C((__int64)v835, v252, (__int64)"/Pixel");
      v515 = v641;
      v516 = v642;
      sub_180075D94(v253, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEF8);
    }
  }
  if ( dword_1801CDEFC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDEFC);
    if ( dword_1801CDEFC == -1 )
    {
      *(_QWORD *)&v643 = &unk_180115C10;
      *((_QWORD *)&v643 + 1) = &unk_180117158;
      *(_QWORD *)&v644 = 0x100000005LL;
      v254 = sub_18009EAF0();
      v255 = sub_180075CF8(v964, 63LL, (__int64)v254, 6);
      v256 = sub_18001C928((__int64)v963, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v255);
      v257 = sub_18001C87C((__int64)v836, v256, (__int64)"/Pixel");
      v515 = v643;
      v516 = v644;
      sub_180075D94(v257, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDEFC);
    }
  }
  if ( dword_1801CDF00 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF00);
    if ( dword_1801CDF00 == -1 )
    {
      *(_QWORD *)&v645 = &unk_180118480;
      *((_QWORD *)&v645 + 1) = &unk_1801186CC;
      *(_QWORD *)&v646 = 0x100000001LL;
      v258 = sub_18009EAF0();
      v259 = sub_180075CF8(v967, 0LL, (__int64)v258, 6);
      v260 = sub_18001C928((__int64)v966, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v259);
      v261 = sub_18001C87C((__int64)v837, v260, (__int64)"/Vertex");
      v515 = v645;
      v516 = v646;
      sub_180075D94(v261, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF00);
    }
  }
  if ( dword_1801CDF04 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF04);
    if ( dword_1801CDF04 == -1 )
    {
      *(_QWORD *)&v647 = &unk_180118480;
      *((_QWORD *)&v647 + 1) = &unk_1801186CC;
      *(_QWORD *)&v648 = 0x100000001LL;
      v262 = sub_18009EAF0();
      v263 = sub_180075CF8(v970, 1LL, (__int64)v262, 6);
      v264 = sub_18001C928((__int64)v969, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v263);
      v265 = sub_18001C87C((__int64)v838, v264, (__int64)"/Vertex");
      v515 = v647;
      v516 = v648;
      sub_180075D94(v265, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF04);
    }
  }
  if ( dword_1801CDF08 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF08);
    if ( dword_1801CDF08 == -1 )
    {
      *(_QWORD *)&v649 = &unk_180118480;
      *((_QWORD *)&v649 + 1) = &unk_1801186CC;
      *(_QWORD *)&v650 = 0x100000001LL;
      v266 = sub_18009EAF0();
      v267 = sub_180075CF8(v973, 2LL, (__int64)v266, 6);
      v268 = sub_18001C928((__int64)v972, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v267);
      v269 = sub_18001C87C((__int64)v839, v268, (__int64)"/Vertex");
      v515 = v649;
      v516 = v650;
      sub_180075D94(v269, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF08);
    }
  }
  if ( dword_1801CDF0C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF0C);
    if ( dword_1801CDF0C == -1 )
    {
      *(_QWORD *)&v651 = &unk_180118480;
      *((_QWORD *)&v651 + 1) = &unk_1801186CC;
      *(_QWORD *)&v652 = 0x100000001LL;
      v270 = sub_18009EAF0();
      v271 = sub_180075CF8(v976, 3LL, (__int64)v270, 6);
      v272 = sub_18001C928((__int64)v975, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v271);
      v273 = sub_18001C87C((__int64)v840, v272, (__int64)"/Vertex");
      v515 = v651;
      v516 = v652;
      sub_180075D94(v273, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF0C);
    }
  }
  if ( dword_1801CDF10 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF10);
    if ( dword_1801CDF10 == -1 )
    {
      *(_QWORD *)&v653 = &unk_180118480;
      *((_QWORD *)&v653 + 1) = &unk_1801186CC;
      *(_QWORD *)&v654 = 0x100000001LL;
      v274 = sub_18009EAF0();
      v275 = sub_180075CF8(v979, 4LL, (__int64)v274, 6);
      v276 = sub_18001C928((__int64)v978, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v275);
      v277 = sub_18001C87C((__int64)v841, v276, (__int64)"/Vertex");
      v515 = v653;
      v516 = v654;
      sub_180075D94(v277, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF10);
    }
  }
  if ( dword_1801CDF14 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF14);
    if ( dword_1801CDF14 == -1 )
    {
      *(_QWORD *)&v655 = &unk_180118480;
      *((_QWORD *)&v655 + 1) = &unk_1801186CC;
      *(_QWORD *)&v656 = 0x100000001LL;
      v278 = sub_18009EAF0();
      v279 = sub_180075CF8(v982, 5LL, (__int64)v278, 6);
      v280 = sub_18001C928((__int64)v981, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v279);
      v281 = sub_18001C87C((__int64)v842, v280, (__int64)"/Vertex");
      v515 = v655;
      v516 = v656;
      sub_180075D94(v281, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF14);
    }
  }
  if ( dword_1801CDF18 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF18);
    if ( dword_1801CDF18 == -1 )
    {
      *(_QWORD *)&v657 = &unk_180118480;
      *((_QWORD *)&v657 + 1) = &unk_1801186CC;
      *(_QWORD *)&v658 = 0x100000001LL;
      v282 = sub_18009EAF0();
      v283 = sub_180075CF8(v985, 6LL, (__int64)v282, 6);
      v284 = sub_18001C928((__int64)v984, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v283);
      v285 = sub_18001C87C((__int64)v843, v284, (__int64)"/Vertex");
      v515 = v657;
      v516 = v658;
      sub_180075D94(v285, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF18);
    }
  }
  if ( dword_1801CDF1C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF1C);
    if ( dword_1801CDF1C == -1 )
    {
      *(_QWORD *)&v659 = &unk_180118480;
      *((_QWORD *)&v659 + 1) = &unk_1801186CC;
      *(_QWORD *)&v660 = 0x100000001LL;
      v286 = sub_18009EAF0();
      v287 = sub_180075CF8(v988, 7LL, (__int64)v286, 6);
      v288 = sub_18001C928((__int64)v987, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v287);
      v289 = sub_18001C87C((__int64)v844, v288, (__int64)"/Vertex");
      v515 = v659;
      v516 = v660;
      sub_180075D94(v289, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF1C);
    }
  }
  if ( dword_1801CDF20 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF20);
    if ( dword_1801CDF20 == -1 )
    {
      *(_QWORD *)&v661 = &unk_180118480;
      *((_QWORD *)&v661 + 1) = &unk_1801186CC;
      *(_QWORD *)&v662 = 0x100000001LL;
      v290 = sub_18009EAF0();
      v291 = sub_180075CF8(v991, 8LL, (__int64)v290, 6);
      v292 = sub_18001C928((__int64)v990, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v291);
      v293 = sub_18001C87C((__int64)v845, v292, (__int64)"/Vertex");
      v515 = v661;
      v516 = v662;
      sub_180075D94(v293, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF20);
    }
  }
  if ( dword_1801CDF24 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF24);
    if ( dword_1801CDF24 == -1 )
    {
      *(_QWORD *)&v663 = &unk_180118480;
      *((_QWORD *)&v663 + 1) = &unk_1801186CC;
      *(_QWORD *)&v664 = 0x100000001LL;
      v294 = sub_18009EAF0();
      v295 = sub_180075CF8(v994, 9LL, (__int64)v294, 6);
      v296 = sub_18001C928((__int64)v993, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v295);
      v297 = sub_18001C87C((__int64)v846, v296, (__int64)"/Vertex");
      v515 = v663;
      v516 = v664;
      sub_180075D94(v297, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF24);
    }
  }
  if ( dword_1801CDF28 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF28);
    if ( dword_1801CDF28 == -1 )
    {
      *(_QWORD *)&v665 = &unk_180118480;
      *((_QWORD *)&v665 + 1) = &unk_1801186CC;
      *(_QWORD *)&v666 = 0x100000001LL;
      v298 = sub_18009EAF0();
      v299 = sub_180075CF8(v997, 10LL, (__int64)v298, 6);
      v300 = sub_18001C928((__int64)v996, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v299);
      v301 = sub_18001C87C((__int64)v847, v300, (__int64)"/Vertex");
      v515 = v665;
      v516 = v666;
      sub_180075D94(v301, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF28);
    }
  }
  if ( dword_1801CDF2C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF2C);
    if ( dword_1801CDF2C == -1 )
    {
      *(_QWORD *)&v667 = &unk_180118480;
      *((_QWORD *)&v667 + 1) = &unk_1801186CC;
      *(_QWORD *)&v668 = 0x100000001LL;
      v302 = sub_18009EAF0();
      v303 = sub_180075CF8(v1000, 11LL, (__int64)v302, 6);
      v304 = sub_18001C928((__int64)v999, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v303);
      v305 = sub_18001C87C((__int64)v848, v304, (__int64)"/Vertex");
      v515 = v667;
      v516 = v668;
      sub_180075D94(v305, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF2C);
    }
  }
  if ( dword_1801CDF30 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF30);
    if ( dword_1801CDF30 == -1 )
    {
      *(_QWORD *)&v669 = &unk_180118480;
      *((_QWORD *)&v669 + 1) = &unk_1801186CC;
      *(_QWORD *)&v670 = 0x100000001LL;
      v306 = sub_18009EAF0();
      v307 = sub_180075CF8(v1003, 12LL, (__int64)v306, 6);
      v308 = sub_18001C928((__int64)v1002, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v307);
      v309 = sub_18001C87C((__int64)v849, v308, (__int64)"/Vertex");
      v515 = v669;
      v516 = v670;
      sub_180075D94(v309, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF30);
    }
  }
  if ( dword_1801CDF34 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF34);
    if ( dword_1801CDF34 == -1 )
    {
      *(_QWORD *)&v671 = &unk_180118480;
      *((_QWORD *)&v671 + 1) = &unk_1801186CC;
      *(_QWORD *)&v672 = 0x100000001LL;
      v310 = sub_18009EAF0();
      v311 = sub_180075CF8(v1006, 13LL, (__int64)v310, 6);
      v312 = sub_18001C928((__int64)v1005, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v311);
      v313 = sub_18001C87C((__int64)v850, v312, (__int64)"/Vertex");
      v515 = v671;
      v516 = v672;
      sub_180075D94(v313, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF34);
    }
  }
  if ( dword_1801CDF38 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF38);
    if ( dword_1801CDF38 == -1 )
    {
      *(_QWORD *)&v673 = &unk_180118480;
      *((_QWORD *)&v673 + 1) = &unk_1801186CC;
      *(_QWORD *)&v674 = 0x100000001LL;
      v314 = sub_18009EAF0();
      v315 = sub_180075CF8(v1009, 14LL, (__int64)v314, 6);
      v316 = sub_18001C928((__int64)v1008, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v315);
      v317 = sub_18001C87C((__int64)v851, v316, (__int64)"/Vertex");
      v515 = v673;
      v516 = v674;
      sub_180075D94(v317, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF38);
    }
  }
  if ( dword_1801CDF3C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF3C);
    if ( dword_1801CDF3C == -1 )
    {
      *(_QWORD *)&v675 = &unk_180118480;
      *((_QWORD *)&v675 + 1) = &unk_1801186CC;
      *(_QWORD *)&v676 = 0x100000001LL;
      v318 = sub_18009EAF0();
      v319 = sub_180075CF8(v1012, 15LL, (__int64)v318, 6);
      v320 = sub_18001C928((__int64)v1011, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v319);
      v321 = sub_18001C87C((__int64)v852, v320, (__int64)"/Vertex");
      v515 = v675;
      v516 = v676;
      sub_180075D94(v321, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF3C);
    }
  }
  if ( dword_1801CDF40 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF40);
    if ( dword_1801CDF40 == -1 )
    {
      *(_QWORD *)&v677 = &unk_180118480;
      *((_QWORD *)&v677 + 1) = &unk_1801186CC;
      *(_QWORD *)&v678 = 0x100000001LL;
      v322 = sub_18009EAF0();
      v323 = sub_180075CF8(v1015, 16LL, (__int64)v322, 6);
      v324 = sub_18001C928((__int64)v1014, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v323);
      v325 = sub_18001C87C((__int64)v853, v324, (__int64)"/Vertex");
      v515 = v677;
      v516 = v678;
      sub_180075D94(v325, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF40);
    }
  }
  if ( dword_1801CDF44 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF44);
    if ( dword_1801CDF44 == -1 )
    {
      *(_QWORD *)&v679 = &unk_180118480;
      *((_QWORD *)&v679 + 1) = &unk_1801186CC;
      *(_QWORD *)&v680 = 0x100000001LL;
      v326 = sub_18009EAF0();
      v327 = sub_180075CF8(v1018, 17LL, (__int64)v326, 6);
      v328 = sub_18001C928((__int64)v1017, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v327);
      v329 = sub_18001C87C((__int64)v854, v328, (__int64)"/Vertex");
      v515 = v679;
      v516 = v680;
      sub_180075D94(v329, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF44);
    }
  }
  if ( dword_1801CDF48 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF48);
    if ( dword_1801CDF48 == -1 )
    {
      *(_QWORD *)&v681 = &unk_180118480;
      *((_QWORD *)&v681 + 1) = &unk_1801186CC;
      *(_QWORD *)&v682 = 0x100000001LL;
      v330 = sub_18009EAF0();
      v331 = sub_180075CF8(v1021, 18LL, (__int64)v330, 6);
      v332 = sub_18001C928((__int64)v1020, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v331);
      v333 = sub_18001C87C((__int64)v855, v332, (__int64)"/Vertex");
      v515 = v681;
      v516 = v682;
      sub_180075D94(v333, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF48);
    }
  }
  if ( dword_1801CDF4C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF4C);
    if ( dword_1801CDF4C == -1 )
    {
      *(_QWORD *)&v683 = &unk_180118480;
      *((_QWORD *)&v683 + 1) = &unk_1801186CC;
      *(_QWORD *)&v684 = 0x100000001LL;
      v334 = sub_18009EAF0();
      v335 = sub_180075CF8(v1024, 19LL, (__int64)v334, 6);
      v336 = sub_18001C928((__int64)v1023, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v335);
      v337 = sub_18001C87C((__int64)v856, v336, (__int64)"/Vertex");
      v515 = v683;
      v516 = v684;
      sub_180075D94(v337, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF4C);
    }
  }
  if ( dword_1801CDF50 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF50);
    if ( dword_1801CDF50 == -1 )
    {
      *(_QWORD *)&v685 = &unk_180118480;
      *((_QWORD *)&v685 + 1) = &unk_1801186CC;
      *(_QWORD *)&v686 = 0x100000001LL;
      v338 = sub_18009EAF0();
      v339 = sub_180075CF8(v1027, 20LL, (__int64)v338, 6);
      v340 = sub_18001C928((__int64)v1026, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v339);
      v341 = sub_18001C87C((__int64)v857, v340, (__int64)"/Vertex");
      v515 = v685;
      v516 = v686;
      sub_180075D94(v341, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF50);
    }
  }
  if ( dword_1801CDF54 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF54);
    if ( dword_1801CDF54 == -1 )
    {
      *(_QWORD *)&v687 = &unk_180118480;
      *((_QWORD *)&v687 + 1) = &unk_1801186CC;
      *(_QWORD *)&v688 = 0x100000001LL;
      v342 = sub_18009EAF0();
      v343 = sub_180075CF8(v1030, 21LL, (__int64)v342, 6);
      v344 = sub_18001C928((__int64)v1029, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v343);
      v345 = sub_18001C87C((__int64)v858, v344, (__int64)"/Vertex");
      v515 = v687;
      v516 = v688;
      sub_180075D94(v345, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF54);
    }
  }
  if ( dword_1801CDF58 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF58);
    if ( dword_1801CDF58 == -1 )
    {
      *(_QWORD *)&v689 = &unk_180118480;
      *((_QWORD *)&v689 + 1) = &unk_1801186CC;
      *(_QWORD *)&v690 = 0x100000001LL;
      v346 = sub_18009EAF0();
      v347 = sub_180075CF8(v1033, 22LL, (__int64)v346, 6);
      v348 = sub_18001C928((__int64)v1032, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v347);
      v349 = sub_18001C87C((__int64)v859, v348, (__int64)"/Vertex");
      v515 = v689;
      v516 = v690;
      sub_180075D94(v349, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF58);
    }
  }
  if ( dword_1801CDF5C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF5C);
    if ( dword_1801CDF5C == -1 )
    {
      *(_QWORD *)&v691 = &unk_180118480;
      *((_QWORD *)&v691 + 1) = &unk_1801186CC;
      *(_QWORD *)&v692 = 0x100000001LL;
      v350 = sub_18009EAF0();
      v351 = sub_180075CF8(v1036, 23LL, (__int64)v350, 6);
      v352 = sub_18001C928((__int64)v1035, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v351);
      v353 = sub_18001C87C((__int64)v860, v352, (__int64)"/Vertex");
      v515 = v691;
      v516 = v692;
      sub_180075D94(v353, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF5C);
    }
  }
  if ( dword_1801CDF60 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF60);
    if ( dword_1801CDF60 == -1 )
    {
      *(_QWORD *)&v693 = &unk_180118480;
      *((_QWORD *)&v693 + 1) = &unk_1801186CC;
      *(_QWORD *)&v694 = 0x100000001LL;
      v354 = sub_18009EAF0();
      v355 = sub_180075CF8(v1039, 24LL, (__int64)v354, 6);
      v356 = sub_18001C928((__int64)v1038, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v355);
      v357 = sub_18001C87C((__int64)v861, v356, (__int64)"/Vertex");
      v515 = v693;
      v516 = v694;
      sub_180075D94(v357, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF60);
    }
  }
  if ( dword_1801CDF64 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF64);
    if ( dword_1801CDF64 == -1 )
    {
      *(_QWORD *)&v695 = &unk_180118480;
      *((_QWORD *)&v695 + 1) = &unk_1801186CC;
      *(_QWORD *)&v696 = 0x100000001LL;
      v358 = sub_18009EAF0();
      v359 = sub_180075CF8(v1042, 25LL, (__int64)v358, 6);
      v360 = sub_18001C928((__int64)v1041, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v359);
      v361 = sub_18001C87C((__int64)v862, v360, (__int64)"/Vertex");
      v515 = v695;
      v516 = v696;
      sub_180075D94(v361, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF64);
    }
  }
  if ( dword_1801CDF68 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF68);
    if ( dword_1801CDF68 == -1 )
    {
      *(_QWORD *)&v697 = &unk_180118480;
      *((_QWORD *)&v697 + 1) = &unk_1801186CC;
      *(_QWORD *)&v698 = 0x100000001LL;
      v362 = sub_18009EAF0();
      v363 = sub_180075CF8(v1045, 26LL, (__int64)v362, 6);
      v364 = sub_18001C928((__int64)v1044, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v363);
      v365 = sub_18001C87C((__int64)v863, v364, (__int64)"/Vertex");
      v515 = v697;
      v516 = v698;
      sub_180075D94(v365, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF68);
    }
  }
  if ( dword_1801CDF6C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF6C);
    if ( dword_1801CDF6C == -1 )
    {
      *(_QWORD *)&v699 = &unk_180118480;
      *((_QWORD *)&v699 + 1) = &unk_1801186CC;
      *(_QWORD *)&v700 = 0x100000001LL;
      v366 = sub_18009EAF0();
      v367 = sub_180075CF8(v1048, 27LL, (__int64)v366, 6);
      v368 = sub_18001C928((__int64)v1047, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v367);
      v369 = sub_18001C87C((__int64)v864, v368, (__int64)"/Vertex");
      v515 = v699;
      v516 = v700;
      sub_180075D94(v369, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF6C);
    }
  }
  if ( dword_1801CDF70 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF70);
    if ( dword_1801CDF70 == -1 )
    {
      *(_QWORD *)&v701 = &unk_180118480;
      *((_QWORD *)&v701 + 1) = &unk_1801186CC;
      *(_QWORD *)&v702 = 0x100000001LL;
      v370 = sub_18009EAF0();
      v371 = sub_180075CF8(v1051, 28LL, (__int64)v370, 6);
      v372 = sub_18001C928((__int64)v1050, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v371);
      v373 = sub_18001C87C((__int64)v865, v372, (__int64)"/Vertex");
      v515 = v701;
      v516 = v702;
      sub_180075D94(v373, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF70);
    }
  }
  if ( dword_1801CDF74 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF74);
    if ( dword_1801CDF74 == -1 )
    {
      *(_QWORD *)&v703 = &unk_180118480;
      *((_QWORD *)&v703 + 1) = &unk_1801186CC;
      *(_QWORD *)&v704 = 0x100000001LL;
      v374 = sub_18009EAF0();
      v375 = sub_180075CF8(v1054, 29LL, (__int64)v374, 6);
      v376 = sub_18001C928((__int64)v1053, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v375);
      v377 = sub_18001C87C((__int64)v866, v376, (__int64)"/Vertex");
      v515 = v703;
      v516 = v704;
      sub_180075D94(v377, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF74);
    }
  }
  if ( dword_1801CDF78 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF78);
    if ( dword_1801CDF78 == -1 )
    {
      *(_QWORD *)&v705 = &unk_180118480;
      *((_QWORD *)&v705 + 1) = &unk_1801186CC;
      *(_QWORD *)&v706 = 0x100000001LL;
      v378 = sub_18009EAF0();
      v379 = sub_180075CF8(v1057, 30LL, (__int64)v378, 6);
      v380 = sub_18001C928((__int64)v1056, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v379);
      v381 = sub_18001C87C((__int64)v867, v380, (__int64)"/Vertex");
      v515 = v705;
      v516 = v706;
      sub_180075D94(v381, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF78);
    }
  }
  if ( dword_1801CDF7C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF7C);
    if ( dword_1801CDF7C == -1 )
    {
      *(_QWORD *)&v707 = &unk_180118480;
      *((_QWORD *)&v707 + 1) = &unk_1801186CC;
      *(_QWORD *)&v708 = 0x100000001LL;
      v382 = sub_18009EAF0();
      v383 = sub_180075CF8(v1060, 31LL, (__int64)v382, 6);
      v384 = sub_18001C928((__int64)v1059, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v383);
      v385 = sub_18001C87C((__int64)v868, v384, (__int64)"/Vertex");
      v515 = v707;
      v516 = v708;
      sub_180075D94(v385, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF7C);
    }
  }
  if ( dword_1801CDF80 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF80);
    if ( dword_1801CDF80 == -1 )
    {
      *(_QWORD *)&v771 = &unk_180118480;
      *((_QWORD *)&v771 + 1) = &unk_1801186CC;
      *(_QWORD *)&v772 = 0x100000001LL;
      v386 = sub_18009EAF0();
      v387 = sub_180075CF8(v1063, 32LL, (__int64)v386, 6);
      v388 = sub_18001C928((__int64)v1062, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v387);
      v389 = sub_18001C87C((__int64)v869, v388, (__int64)"/Vertex");
      v515 = v771;
      v516 = v772;
      sub_180075D94(v389, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF80);
    }
  }
  if ( dword_1801CDF84 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF84);
    if ( dword_1801CDF84 == -1 )
    {
      *(_QWORD *)&v709 = &unk_180118480;
      *((_QWORD *)&v709 + 1) = &unk_1801186CC;
      *(_QWORD *)&v710 = 0x100000001LL;
      v390 = sub_18009EAF0();
      v391 = sub_180075CF8(v1066, 33LL, (__int64)v390, 6);
      v392 = sub_18001C928((__int64)v1065, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v391);
      v393 = sub_18001C87C((__int64)v870, v392, (__int64)"/Vertex");
      v515 = v709;
      v516 = v710;
      sub_180075D94(v393, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF84);
    }
  }
  if ( dword_1801CDF88 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF88);
    if ( dword_1801CDF88 == -1 )
    {
      *(_QWORD *)&v711 = &unk_180118480;
      *((_QWORD *)&v711 + 1) = &unk_1801186CC;
      *(_QWORD *)&v712 = 0x100000001LL;
      v394 = sub_18009EAF0();
      v395 = sub_180075CF8(v1069, 34LL, (__int64)v394, 6);
      v396 = sub_18001C928((__int64)v1068, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v395);
      v397 = sub_18001C87C((__int64)v871, v396, (__int64)"/Vertex");
      v515 = v711;
      v516 = v712;
      sub_180075D94(v397, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF88);
    }
  }
  if ( dword_1801CDF8C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF8C);
    if ( dword_1801CDF8C == -1 )
    {
      *(_QWORD *)&v713 = &unk_180118480;
      *((_QWORD *)&v713 + 1) = &unk_1801186CC;
      *(_QWORD *)&v714 = 0x100000001LL;
      v398 = sub_18009EAF0();
      v399 = sub_180075CF8(v1072, 35LL, (__int64)v398, 6);
      v400 = sub_18001C928((__int64)v1071, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v399);
      v401 = sub_18001C87C((__int64)v872, v400, (__int64)"/Vertex");
      v515 = v713;
      v516 = v714;
      sub_180075D94(v401, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF8C);
    }
  }
  if ( dword_1801CDF90 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF90);
    if ( dword_1801CDF90 == -1 )
    {
      *(_QWORD *)&v715 = &unk_180118480;
      *((_QWORD *)&v715 + 1) = &unk_1801186CC;
      *(_QWORD *)&v716 = 0x100000001LL;
      v402 = sub_18009EAF0();
      v403 = sub_180075CF8(v1075, 36LL, (__int64)v402, 6);
      v404 = sub_18001C928((__int64)v1074, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v403);
      v405 = sub_18001C87C((__int64)v873, v404, (__int64)"/Vertex");
      v515 = v715;
      v516 = v716;
      sub_180075D94(v405, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF90);
    }
  }
  if ( dword_1801CDF94 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF94);
    if ( dword_1801CDF94 == -1 )
    {
      *(_QWORD *)&v717 = &unk_180118480;
      *((_QWORD *)&v717 + 1) = &unk_1801186CC;
      *(_QWORD *)&v718 = 0x100000001LL;
      v406 = sub_18009EAF0();
      v407 = sub_180075CF8(v1078, 37LL, (__int64)v406, 6);
      v408 = sub_18001C928((__int64)v1077, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v407);
      v409 = sub_18001C87C((__int64)v874, v408, (__int64)"/Vertex");
      v515 = v717;
      v516 = v718;
      sub_180075D94(v409, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF94);
    }
  }
  if ( dword_1801CDF98 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF98);
    if ( dword_1801CDF98 == -1 )
    {
      *(_QWORD *)&v719 = &unk_180118480;
      *((_QWORD *)&v719 + 1) = &unk_1801186CC;
      *(_QWORD *)&v720 = 0x100000001LL;
      v410 = sub_18009EAF0();
      v411 = sub_180075CF8(v1081, 38LL, (__int64)v410, 6);
      v412 = sub_18001C928((__int64)v1080, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v411);
      v413 = sub_18001C87C((__int64)v875, v412, (__int64)"/Vertex");
      v515 = v719;
      v516 = v720;
      sub_180075D94(v413, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF98);
    }
  }
  if ( dword_1801CDF9C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDF9C);
    if ( dword_1801CDF9C == -1 )
    {
      *(_QWORD *)&v721 = &unk_180118480;
      *((_QWORD *)&v721 + 1) = &unk_1801186CC;
      *(_QWORD *)&v722 = 0x100000001LL;
      v414 = sub_18009EAF0();
      v415 = sub_180075CF8(v1084, 39LL, (__int64)v414, 6);
      v416 = sub_18001C928((__int64)v1083, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v415);
      v417 = sub_18001C87C((__int64)v876, v416, (__int64)"/Vertex");
      v515 = v721;
      v516 = v722;
      sub_180075D94(v417, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDF9C);
    }
  }
  if ( dword_1801CDFA0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFA0);
    if ( dword_1801CDFA0 == -1 )
    {
      *(_QWORD *)&v723 = &unk_180118480;
      *((_QWORD *)&v723 + 1) = &unk_1801186CC;
      *(_QWORD *)&v724 = 0x100000001LL;
      v418 = sub_18009EAF0();
      v419 = sub_180075CF8(v1087, 40LL, (__int64)v418, 6);
      v420 = sub_18001C928((__int64)v1086, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v419);
      v421 = sub_18001C87C((__int64)v877, v420, (__int64)"/Vertex");
      v515 = v723;
      v516 = v724;
      sub_180075D94(v421, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFA0);
    }
  }
  if ( dword_1801CDFA4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFA4);
    if ( dword_1801CDFA4 == -1 )
    {
      *(_QWORD *)&v725 = &unk_180118480;
      *((_QWORD *)&v725 + 1) = &unk_1801186CC;
      *(_QWORD *)&v726 = 0x100000001LL;
      v422 = sub_18009EAF0();
      v423 = sub_180075CF8(v1090, 41LL, (__int64)v422, 6);
      v424 = sub_18001C928((__int64)v1089, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v423);
      v425 = sub_18001C87C((__int64)v878, v424, (__int64)"/Vertex");
      v515 = v725;
      v516 = v726;
      sub_180075D94(v425, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFA4);
    }
  }
  if ( dword_1801CDFA8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFA8);
    if ( dword_1801CDFA8 == -1 )
    {
      *(_QWORD *)&v727 = &unk_180118480;
      *((_QWORD *)&v727 + 1) = &unk_1801186CC;
      *(_QWORD *)&v728 = 0x100000001LL;
      v426 = sub_18009EAF0();
      v427 = sub_180075CF8(v1093, 42LL, (__int64)v426, 6);
      v428 = sub_18001C928((__int64)v1092, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v427);
      v429 = sub_18001C87C((__int64)v879, v428, (__int64)"/Vertex");
      v515 = v727;
      v516 = v728;
      sub_180075D94(v429, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFA8);
    }
  }
  if ( dword_1801CDFAC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFAC);
    if ( dword_1801CDFAC == -1 )
    {
      *(_QWORD *)&v729 = &unk_180118480;
      *((_QWORD *)&v729 + 1) = &unk_1801186CC;
      *(_QWORD *)&v730 = 0x100000001LL;
      v430 = sub_18009EAF0();
      v431 = sub_180075CF8(v1096, 43LL, (__int64)v430, 6);
      v432 = sub_18001C928((__int64)v1095, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v431);
      v433 = sub_18001C87C((__int64)v880, v432, (__int64)"/Vertex");
      v515 = v729;
      v516 = v730;
      sub_180075D94(v433, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFAC);
    }
  }
  if ( dword_1801CDFB0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFB0);
    if ( dword_1801CDFB0 == -1 )
    {
      *(_QWORD *)&v731 = &unk_180118480;
      *((_QWORD *)&v731 + 1) = &unk_1801186CC;
      *(_QWORD *)&v732 = 0x100000001LL;
      v434 = sub_18009EAF0();
      v435 = sub_180075CF8(v1099, 44LL, (__int64)v434, 6);
      v436 = sub_18001C928((__int64)v1098, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v435);
      v437 = sub_18001C87C((__int64)v881, v436, (__int64)"/Vertex");
      v515 = v731;
      v516 = v732;
      sub_180075D94(v437, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFB0);
    }
  }
  if ( dword_1801CDFB4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFB4);
    if ( dword_1801CDFB4 == -1 )
    {
      *(_QWORD *)&v733 = &unk_180118480;
      *((_QWORD *)&v733 + 1) = &unk_1801186CC;
      *(_QWORD *)&v734 = 0x100000001LL;
      v438 = sub_18009EAF0();
      v439 = sub_180075CF8(v1102, 45LL, (__int64)v438, 6);
      v440 = sub_18001C928((__int64)v1101, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v439);
      v441 = sub_18001C87C((__int64)v882, v440, (__int64)"/Vertex");
      v515 = v733;
      v516 = v734;
      sub_180075D94(v441, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFB4);
    }
  }
  if ( dword_1801CDFB8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFB8);
    if ( dword_1801CDFB8 == -1 )
    {
      *(_QWORD *)&v735 = &unk_180118480;
      *((_QWORD *)&v735 + 1) = &unk_1801186CC;
      *(_QWORD *)&v736 = 0x100000001LL;
      v442 = sub_18009EAF0();
      v443 = sub_180075CF8(v1105, 46LL, (__int64)v442, 6);
      v444 = sub_18001C928((__int64)v1104, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v443);
      v445 = sub_18001C87C((__int64)v883, v444, (__int64)"/Vertex");
      v515 = v735;
      v516 = v736;
      sub_180075D94(v445, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFB8);
    }
  }
  if ( dword_1801CDFBC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFBC);
    if ( dword_1801CDFBC == -1 )
    {
      *(_QWORD *)&v737 = &unk_180118480;
      *((_QWORD *)&v737 + 1) = &unk_1801186CC;
      *(_QWORD *)&v738 = 0x100000001LL;
      v446 = sub_18009EAF0();
      v447 = sub_180075CF8(v1108, 47LL, (__int64)v446, 6);
      v448 = sub_18001C928((__int64)v1107, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v447);
      v449 = sub_18001C87C((__int64)v884, v448, (__int64)"/Vertex");
      v515 = v737;
      v516 = v738;
      sub_180075D94(v449, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFBC);
    }
  }
  if ( dword_1801CDFC0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFC0);
    if ( dword_1801CDFC0 == -1 )
    {
      *(_QWORD *)&v739 = &unk_180118480;
      *((_QWORD *)&v739 + 1) = &unk_1801186CC;
      *(_QWORD *)&v740 = 0x100000001LL;
      v450 = sub_18009EAF0();
      v451 = sub_180075CF8(v1111, 48LL, (__int64)v450, 6);
      v452 = sub_18001C928((__int64)v1110, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v451);
      v453 = sub_18001C87C((__int64)v885, v452, (__int64)"/Vertex");
      v515 = v739;
      v516 = v740;
      sub_180075D94(v453, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFC0);
    }
  }
  if ( dword_1801CDFC4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFC4);
    if ( dword_1801CDFC4 == -1 )
    {
      *(_QWORD *)&v741 = &unk_180118480;
      *((_QWORD *)&v741 + 1) = &unk_1801186CC;
      *(_QWORD *)&v742 = 0x100000001LL;
      v454 = sub_18009EAF0();
      v455 = sub_180075CF8(v1114, 49LL, (__int64)v454, 6);
      v456 = sub_18001C928((__int64)v1113, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v455);
      v457 = sub_18001C87C((__int64)v886, v456, (__int64)"/Vertex");
      v515 = v741;
      v516 = v742;
      sub_180075D94(v457, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFC4);
    }
  }
  if ( dword_1801CDFC8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFC8);
    if ( dword_1801CDFC8 == -1 )
    {
      *(_QWORD *)&v743 = &unk_180118480;
      *((_QWORD *)&v743 + 1) = &unk_1801186CC;
      *(_QWORD *)&v744 = 0x100000001LL;
      v458 = sub_18009EAF0();
      v459 = sub_180075CF8(v1117, 50LL, (__int64)v458, 6);
      v460 = sub_18001C928((__int64)v1116, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v459);
      v461 = sub_18001C87C((__int64)v887, v460, (__int64)"/Vertex");
      v515 = v743;
      v516 = v744;
      sub_180075D94(v461, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFC8);
    }
  }
  if ( dword_1801CDFCC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFCC);
    if ( dword_1801CDFCC == -1 )
    {
      *(_QWORD *)&v745 = &unk_180118480;
      *((_QWORD *)&v745 + 1) = &unk_1801186CC;
      *(_QWORD *)&v746 = 0x100000001LL;
      v462 = sub_18009EAF0();
      v463 = sub_180075CF8(v1120, 51LL, (__int64)v462, 6);
      v464 = sub_18001C928((__int64)v1119, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v463);
      v465 = sub_18001C87C((__int64)v888, v464, (__int64)"/Vertex");
      v515 = v745;
      v516 = v746;
      sub_180075D94(v465, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFCC);
    }
  }
  if ( dword_1801CDFD0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFD0);
    if ( dword_1801CDFD0 == -1 )
    {
      *(_QWORD *)&v747 = &unk_180118480;
      *((_QWORD *)&v747 + 1) = &unk_1801186CC;
      *(_QWORD *)&v748 = 0x100000001LL;
      v466 = sub_18009EAF0();
      v467 = sub_180075CF8(v1123, 52LL, (__int64)v466, 6);
      v468 = sub_18001C928((__int64)v1122, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v467);
      v469 = sub_18001C87C((__int64)v889, v468, (__int64)"/Vertex");
      v515 = v747;
      v516 = v748;
      sub_180075D94(v469, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFD0);
    }
  }
  if ( dword_1801CDFD4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFD4);
    if ( dword_1801CDFD4 == -1 )
    {
      *(_QWORD *)&v749 = &unk_180118480;
      *((_QWORD *)&v749 + 1) = &unk_1801186CC;
      *(_QWORD *)&v750 = 0x100000001LL;
      v470 = sub_18009EAF0();
      v471 = sub_180075CF8(v1126, 53LL, (__int64)v470, 6);
      v472 = sub_18001C928((__int64)v1125, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v471);
      v473 = sub_18001C87C((__int64)v890, v472, (__int64)"/Vertex");
      v515 = v749;
      v516 = v750;
      sub_180075D94(v473, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFD4);
    }
  }
  if ( dword_1801CDFD8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFD8);
    if ( dword_1801CDFD8 == -1 )
    {
      *(_QWORD *)&v751 = &unk_180118480;
      *((_QWORD *)&v751 + 1) = &unk_1801186CC;
      *(_QWORD *)&v752 = 0x100000001LL;
      v474 = sub_18009EAF0();
      v475 = sub_180075CF8(v1129, 54LL, (__int64)v474, 6);
      v476 = sub_18001C928((__int64)v1128, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v475);
      v477 = sub_18001C87C((__int64)v891, v476, (__int64)"/Vertex");
      v515 = v751;
      v516 = v752;
      sub_180075D94(v477, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFD8);
    }
  }
  if ( dword_1801CDFDC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFDC);
    if ( dword_1801CDFDC == -1 )
    {
      *(_QWORD *)&v753 = &unk_180118480;
      *((_QWORD *)&v753 + 1) = &unk_1801186CC;
      *(_QWORD *)&v754 = 0x100000001LL;
      v478 = sub_18009EAF0();
      v479 = sub_180075CF8(v1132, 55LL, (__int64)v478, 6);
      v480 = sub_18001C928((__int64)v1131, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v479);
      v481 = sub_18001C87C((__int64)v892, v480, (__int64)"/Vertex");
      v515 = v753;
      v516 = v754;
      sub_180075D94(v481, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFDC);
    }
  }
  if ( dword_1801CDFE0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFE0);
    if ( dword_1801CDFE0 == -1 )
    {
      *(_QWORD *)&v755 = &unk_180118480;
      *((_QWORD *)&v755 + 1) = &unk_1801186CC;
      *(_QWORD *)&v756 = 0x100000001LL;
      v482 = sub_18009EAF0();
      v483 = sub_180075CF8(v1135, 56LL, (__int64)v482, 6);
      v484 = sub_18001C928((__int64)v1134, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v483);
      v485 = sub_18001C87C((__int64)v893, v484, (__int64)"/Vertex");
      v515 = v755;
      v516 = v756;
      sub_180075D94(v485, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFE0);
    }
  }
  if ( dword_1801CDFE4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFE4);
    if ( dword_1801CDFE4 == -1 )
    {
      *(_QWORD *)&v757 = &unk_180118480;
      *((_QWORD *)&v757 + 1) = &unk_1801186CC;
      *(_QWORD *)&v758 = 0x100000001LL;
      v486 = sub_18009EAF0();
      v487 = sub_180075CF8(v1138, 57LL, (__int64)v486, 6);
      v488 = sub_18001C928((__int64)v1137, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v487);
      v489 = sub_18001C87C((__int64)v894, v488, (__int64)"/Vertex");
      v515 = v757;
      v516 = v758;
      sub_180075D94(v489, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFE4);
    }
  }
  if ( dword_1801CDFE8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFE8);
    if ( dword_1801CDFE8 == -1 )
    {
      *(_QWORD *)&v759 = &unk_180118480;
      *((_QWORD *)&v759 + 1) = &unk_1801186CC;
      *(_QWORD *)&v760 = 0x100000001LL;
      v490 = sub_18009EAF0();
      v491 = sub_180075CF8(v1141, 58LL, (__int64)v490, 6);
      v492 = sub_18001C928((__int64)v1140, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v491);
      v493 = sub_18001C87C((__int64)v895, v492, (__int64)"/Vertex");
      v515 = v759;
      v516 = v760;
      sub_180075D94(v493, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFE8);
    }
  }
  if ( dword_1801CDFEC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFEC);
    if ( dword_1801CDFEC == -1 )
    {
      *(_QWORD *)&v761 = &unk_180118480;
      *((_QWORD *)&v761 + 1) = &unk_1801186CC;
      *(_QWORD *)&v762 = 0x100000001LL;
      v494 = sub_18009EAF0();
      v495 = sub_180075CF8(v1144, 59LL, (__int64)v494, 6);
      v496 = sub_18001C928((__int64)v1143, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v495);
      v497 = sub_18001C87C((__int64)v896, v496, (__int64)"/Vertex");
      v515 = v761;
      v516 = v762;
      sub_180075D94(v497, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFEC);
    }
  }
  if ( dword_1801CDFF0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFF0);
    if ( dword_1801CDFF0 == -1 )
    {
      *(_QWORD *)&v763 = &unk_180118480;
      *((_QWORD *)&v763 + 1) = &unk_1801186CC;
      *(_QWORD *)&v764 = 0x100000001LL;
      v498 = sub_18009EAF0();
      v499 = sub_180075CF8(v1147, 60LL, (__int64)v498, 6);
      v500 = sub_18001C928((__int64)v1146, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v499);
      v501 = sub_18001C87C((__int64)v897, v500, (__int64)"/Vertex");
      v515 = v763;
      v516 = v764;
      sub_180075D94(v501, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFF0);
    }
  }
  if ( dword_1801CDFF4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFF4);
    if ( dword_1801CDFF4 == -1 )
    {
      *(_QWORD *)&v765 = &unk_180118480;
      *((_QWORD *)&v765 + 1) = &unk_1801186CC;
      *(_QWORD *)&v766 = 0x100000001LL;
      v502 = sub_18009EAF0();
      v503 = sub_180075CF8(v1150, 61LL, (__int64)v502, 6);
      v504 = sub_18001C928((__int64)v1149, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v503);
      v505 = sub_18001C87C((__int64)v898, v504, (__int64)"/Vertex");
      v515 = v765;
      v516 = v766;
      sub_180075D94(v505, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFF4);
    }
  }
  if ( dword_1801CDFF8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFF8);
    if ( dword_1801CDFF8 == -1 )
    {
      *(_QWORD *)&v767 = &unk_180118480;
      *((_QWORD *)&v767 + 1) = &unk_1801186CC;
      *(_QWORD *)&v768 = 0x100000001LL;
      v506 = sub_18009EAF0();
      v507 = sub_180075CF8(v1153, 62LL, (__int64)v506, 6);
      v508 = sub_18001C928((__int64)v1152, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v507);
      v509 = sub_18001C87C((__int64)v899, v508, (__int64)"/Vertex");
      v515 = v767;
      v516 = v768;
      sub_180075D94(v509, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFF8);
    }
  }
  if ( dword_1801CDFFC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000D534(&dword_1801CDFFC);
    if ( dword_1801CDFFC == -1 )
    {
      *(_QWORD *)&v769 = &unk_180118480;
      *((_QWORD *)&v769 + 1) = &unk_1801186CC;
      *(_QWORD *)&v770 = 0x100000001LL;
      v510 = sub_18009EAF0();
      v511 = sub_180075CF8(v1156, 63LL, (__int64)v510, 6);
      v512 = sub_18001C928((__int64)v1155, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v511);
      v513 = sub_18001C87C((__int64)v900, v512, (__int64)"/Vertex");
      v515 = v769;
      v516 = v770;
      sub_180075D94(v513, (__int64)&v515);
      sub_180011E30();
      sub_180011E30();
      sub_18000D4CC(&dword_1801CDFFC);
    }
  }
  return 0LL;
}
