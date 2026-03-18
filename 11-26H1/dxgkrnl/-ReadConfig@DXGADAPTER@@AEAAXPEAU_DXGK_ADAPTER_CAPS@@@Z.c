/*
 * XREFs of ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14019E24C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall DXGADAPTER::ReadConfig(DXGADAPTER *this, struct _DXGK_ADAPTER_CAPS *a2)
{
  int v4; // ebx
  bool v5; // zf
  bool v6; // al
  bool v7; // al
  bool v8; // al
  bool v9; // al
  bool v10; // al
  bool v11; // al
  bool v12; // al
  char v13; // al
  bool v14; // al
  char v15; // al
  bool v16; // cf
  int v17; // eax
  bool v18; // al
  bool v19; // al
  bool v20; // al
  bool v21; // al
  char v22; // al
  char v23; // dl
  int v24; // r8d
  char v25; // al
  int v26; // eax
  bool v27; // al
  int v28; // eax
  char v29; // dl
  _DWORD *v30; // rcx
  _DWORD *v31; // r8
  char v32; // al
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-CCh] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+3Ch] [rbp-C4h] BYREF
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+44h] [rbp-BCh] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+4Ch] [rbp-B4h] BYREF
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  int v46; // [rsp+64h] [rbp-9Ch] BYREF
  int v47; // [rsp+68h] [rbp-98h] BYREF
  int v48; // [rsp+6Ch] [rbp-94h] BYREF
  int v49; // [rsp+70h] [rbp-90h] BYREF
  int v50; // [rsp+74h] [rbp-8Ch] BYREF
  int v51; // [rsp+78h] [rbp-88h] BYREF
  int v52; // [rsp+7Ch] [rbp-84h] BYREF
  int v53; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+84h] [rbp-7Ch] BYREF
  int v55; // [rsp+88h] [rbp-78h] BYREF
  int v56; // [rsp+8Ch] [rbp-74h] BYREF
  int v57; // [rsp+90h] [rbp-70h] BYREF
  int v58; // [rsp+94h] [rbp-6Ch] BYREF
  int v59; // [rsp+98h] [rbp-68h] BYREF
  int v60; // [rsp+9Ch] [rbp-64h] BYREF
  int v61; // [rsp+A0h] [rbp-60h] BYREF
  int v62; // [rsp+A4h] [rbp-5Ch] BYREF
  int v63; // [rsp+A8h] [rbp-58h] BYREF
  int v64; // [rsp+ACh] [rbp-54h] BYREF
  int v65; // [rsp+B0h] [rbp-50h] BYREF
  int v66; // [rsp+B4h] [rbp-4Ch] BYREF
  int v67; // [rsp+B8h] [rbp-48h] BYREF
  int v68; // [rsp+BCh] [rbp-44h] BYREF
  int v69; // [rsp+C0h] [rbp-40h] BYREF
  int v70; // [rsp+C4h] [rbp-3Ch] BYREF
  int v71; // [rsp+C8h] [rbp-38h] BYREF
  int v72; // [rsp+CCh] [rbp-34h] BYREF
  int v73; // [rsp+D0h] [rbp-30h] BYREF
  int v74; // [rsp+D4h] [rbp-2Ch] BYREF
  int v75; // [rsp+D8h] [rbp-28h] BYREF
  int v76; // [rsp+DCh] [rbp-24h] BYREF
  int v77; // [rsp+E0h] [rbp-20h] BYREF
  int v78; // [rsp+E4h] [rbp-1Ch] BYREF
  int v79; // [rsp+E8h] [rbp-18h] BYREF
  int v80; // [rsp+ECh] [rbp-14h] BYREF
  int v81; // [rsp+F0h] [rbp-10h] BYREF
  int v82; // [rsp+F4h] [rbp-Ch] BYREF
  int v83; // [rsp+F8h] [rbp-8h] BYREF
  int v84; // [rsp+FCh] [rbp-4h] BYREF
  int v85; // [rsp+100h] [rbp+0h] BYREF
  int v86; // [rsp+104h] [rbp+4h] BYREF
  int v87; // [rsp+108h] [rbp+8h] BYREF
  int v88; // [rsp+10Ch] [rbp+Ch] BYREF
  int v89; // [rsp+110h] [rbp+10h] BYREF
  int v90; // [rsp+114h] [rbp+14h] BYREF
  int v91; // [rsp+118h] [rbp+18h] BYREF
  int v92; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v93; // [rsp+120h] [rbp+20h] BYREF
  int v94; // [rsp+124h] [rbp+24h] BYREF
  int v95; // [rsp+128h] [rbp+28h] BYREF
  int v96; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v97; // [rsp+130h] [rbp+30h] BYREF
  int v98; // [rsp+134h] [rbp+34h] BYREF
  int v99; // [rsp+138h] [rbp+38h] BYREF
  int v100; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v101; // [rsp+140h] [rbp+40h] BYREF
  int v102; // [rsp+144h] [rbp+44h] BYREF
  int v103; // [rsp+148h] [rbp+48h] BYREF
  int v104; // [rsp+14Ch] [rbp+4Ch] BYREF
  int v105; // [rsp+150h] [rbp+50h] BYREF
  int v106; // [rsp+154h] [rbp+54h] BYREF
  int v107; // [rsp+158h] [rbp+58h] BYREF
  int v108; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v109; // [rsp+160h] [rbp+60h] BYREF
  int v110; // [rsp+164h] [rbp+64h] BYREF
  int v111; // [rsp+168h] [rbp+68h] BYREF
  int v112; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v113; // [rsp+170h] [rbp+70h] BYREF
  int v114; // [rsp+174h] [rbp+74h] BYREF
  int v115; // [rsp+178h] [rbp+78h] BYREF
  int v116; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v117; // [rsp+180h] [rbp+80h] BYREF
  int v118; // [rsp+184h] [rbp+84h] BYREF
  int v119; // [rsp+188h] [rbp+88h] BYREF
  int v120; // [rsp+18Ch] [rbp+8Ch] BYREF
  int v121; // [rsp+190h] [rbp+90h] BYREF
  int v122; // [rsp+194h] [rbp+94h] BYREF
  int v123; // [rsp+198h] [rbp+98h] BYREF
  int v124; // [rsp+19Ch] [rbp+9Ch] BYREF
  __int64 v125; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v126; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v127; // [rsp+1B0h] [rbp+B0h]
  __int64 v128; // [rsp+1C0h] [rbp+C0h] BYREF
  int v129; // [rsp+1C8h] [rbp+C8h]
  const wchar_t *v130; // [rsp+1D0h] [rbp+D0h]
  int *v131; // [rsp+1D8h] [rbp+D8h]
  int v132; // [rsp+1E0h] [rbp+E0h]
  int *v133; // [rsp+1E8h] [rbp+E8h]
  int v134; // [rsp+1F0h] [rbp+F0h]
  __int64 v135; // [rsp+1F8h] [rbp+F8h]
  int v136; // [rsp+200h] [rbp+100h]
  const wchar_t *v137; // [rsp+208h] [rbp+108h]
  int *v138; // [rsp+210h] [rbp+110h]
  int v139; // [rsp+218h] [rbp+118h]
  int *v140; // [rsp+220h] [rbp+120h]
  int v141; // [rsp+228h] [rbp+128h]
  __int64 v142; // [rsp+230h] [rbp+130h]
  int v143; // [rsp+238h] [rbp+138h]
  const wchar_t *v144; // [rsp+240h] [rbp+140h]
  int *v145; // [rsp+248h] [rbp+148h]
  int v146; // [rsp+250h] [rbp+150h]
  int *v147; // [rsp+258h] [rbp+158h]
  int v148; // [rsp+260h] [rbp+160h]
  __int64 v149; // [rsp+268h] [rbp+168h]
  int v150; // [rsp+270h] [rbp+170h]
  const wchar_t *v151; // [rsp+278h] [rbp+178h]
  __int64 *v152; // [rsp+280h] [rbp+180h]
  int v153; // [rsp+288h] [rbp+188h]
  __int64 *v154; // [rsp+290h] [rbp+190h]
  int v155; // [rsp+298h] [rbp+198h]
  __int64 v156; // [rsp+2A0h] [rbp+1A0h]
  int v157; // [rsp+2A8h] [rbp+1A8h]
  const wchar_t *v158; // [rsp+2B0h] [rbp+1B0h]
  int *v159; // [rsp+2B8h] [rbp+1B8h]
  int v160; // [rsp+2C0h] [rbp+1C0h]
  int *v161; // [rsp+2C8h] [rbp+1C8h]
  int v162; // [rsp+2D0h] [rbp+1D0h]
  __int64 v163; // [rsp+2D8h] [rbp+1D8h]
  int v164; // [rsp+2E0h] [rbp+1E0h]
  const wchar_t *v165; // [rsp+2E8h] [rbp+1E8h]
  int *v166; // [rsp+2F0h] [rbp+1F0h]
  int v167; // [rsp+2F8h] [rbp+1F8h]
  int *v168; // [rsp+300h] [rbp+200h]
  int v169; // [rsp+308h] [rbp+208h]
  __int64 v170; // [rsp+310h] [rbp+210h]
  int v171; // [rsp+318h] [rbp+218h]
  const wchar_t *v172; // [rsp+320h] [rbp+220h]
  int *v173; // [rsp+328h] [rbp+228h]
  int v174; // [rsp+330h] [rbp+230h]
  int *v175; // [rsp+338h] [rbp+238h]
  int v176; // [rsp+340h] [rbp+240h]
  __int64 v177; // [rsp+348h] [rbp+248h]
  int v178; // [rsp+350h] [rbp+250h]
  const wchar_t *v179; // [rsp+358h] [rbp+258h]
  int *v180; // [rsp+360h] [rbp+260h]
  int v181; // [rsp+368h] [rbp+268h]
  int *v182; // [rsp+370h] [rbp+270h]
  int v183; // [rsp+378h] [rbp+278h]
  __int64 v184; // [rsp+380h] [rbp+280h]
  int v185; // [rsp+388h] [rbp+288h]
  const wchar_t *v186; // [rsp+390h] [rbp+290h]
  int *v187; // [rsp+398h] [rbp+298h]
  int v188; // [rsp+3A0h] [rbp+2A0h]
  int *v189; // [rsp+3A8h] [rbp+2A8h]
  int v190; // [rsp+3B0h] [rbp+2B0h]
  __int64 v191; // [rsp+3B8h] [rbp+2B8h]
  int v192; // [rsp+3C0h] [rbp+2C0h]
  const wchar_t *v193; // [rsp+3C8h] [rbp+2C8h]
  int *v194; // [rsp+3D0h] [rbp+2D0h]
  int v195; // [rsp+3D8h] [rbp+2D8h]
  int *v196; // [rsp+3E0h] [rbp+2E0h]
  int v197; // [rsp+3E8h] [rbp+2E8h]
  __int64 v198; // [rsp+3F0h] [rbp+2F0h]
  int v199; // [rsp+3F8h] [rbp+2F8h]
  const wchar_t *v200; // [rsp+400h] [rbp+300h]
  int *v201; // [rsp+408h] [rbp+308h]
  int v202; // [rsp+410h] [rbp+310h]
  int *v203; // [rsp+418h] [rbp+318h]
  int v204; // [rsp+420h] [rbp+320h]
  __int64 v205; // [rsp+428h] [rbp+328h]
  int v206; // [rsp+430h] [rbp+330h]
  const wchar_t *v207; // [rsp+438h] [rbp+338h]
  int *v208; // [rsp+440h] [rbp+340h]
  int v209; // [rsp+448h] [rbp+348h]
  int *v210; // [rsp+450h] [rbp+350h]
  int v211; // [rsp+458h] [rbp+358h]
  __int64 v212; // [rsp+460h] [rbp+360h]
  int v213; // [rsp+468h] [rbp+368h]
  const wchar_t *v214; // [rsp+470h] [rbp+370h]
  int *v215; // [rsp+478h] [rbp+378h]
  int v216; // [rsp+480h] [rbp+380h]
  int *v217; // [rsp+488h] [rbp+388h]
  int v218; // [rsp+490h] [rbp+390h]
  __int64 v219; // [rsp+498h] [rbp+398h]
  int v220; // [rsp+4A0h] [rbp+3A0h]
  const wchar_t *v221; // [rsp+4A8h] [rbp+3A8h]
  int *v222; // [rsp+4B0h] [rbp+3B0h]
  int v223; // [rsp+4B8h] [rbp+3B8h]
  int *v224; // [rsp+4C0h] [rbp+3C0h]
  int v225; // [rsp+4C8h] [rbp+3C8h]
  __int64 v226; // [rsp+4D0h] [rbp+3D0h]
  int v227; // [rsp+4D8h] [rbp+3D8h]
  const wchar_t *v228; // [rsp+4E0h] [rbp+3E0h]
  int *v229; // [rsp+4E8h] [rbp+3E8h]
  int v230; // [rsp+4F0h] [rbp+3F0h]
  int *v231; // [rsp+4F8h] [rbp+3F8h]
  int v232; // [rsp+500h] [rbp+400h]
  __int64 v233; // [rsp+508h] [rbp+408h]
  int v234; // [rsp+510h] [rbp+410h]
  const wchar_t *v235; // [rsp+518h] [rbp+418h]
  int *v236; // [rsp+520h] [rbp+420h]
  int v237; // [rsp+528h] [rbp+428h]
  int *v238; // [rsp+530h] [rbp+430h]
  int v239; // [rsp+538h] [rbp+438h]
  __int64 v240; // [rsp+540h] [rbp+440h]
  int v241; // [rsp+548h] [rbp+448h]
  const wchar_t *v242; // [rsp+550h] [rbp+450h]
  int *v243; // [rsp+558h] [rbp+458h]
  int v244; // [rsp+560h] [rbp+460h]
  int *v245; // [rsp+568h] [rbp+468h]
  int v246; // [rsp+570h] [rbp+470h]
  __int64 v247; // [rsp+578h] [rbp+478h]
  int v248; // [rsp+580h] [rbp+480h]
  const wchar_t *v249; // [rsp+588h] [rbp+488h]
  int *v250; // [rsp+590h] [rbp+490h]
  int v251; // [rsp+598h] [rbp+498h]
  int *v252; // [rsp+5A0h] [rbp+4A0h]
  int v253; // [rsp+5A8h] [rbp+4A8h]
  __int64 v254; // [rsp+5B0h] [rbp+4B0h]
  int v255; // [rsp+5B8h] [rbp+4B8h]
  const wchar_t *v256; // [rsp+5C0h] [rbp+4C0h]
  int *v257; // [rsp+5C8h] [rbp+4C8h]
  int v258; // [rsp+5D0h] [rbp+4D0h]
  int *v259; // [rsp+5D8h] [rbp+4D8h]
  int v260; // [rsp+5E0h] [rbp+4E0h]
  __int64 v261; // [rsp+5E8h] [rbp+4E8h]
  int v262; // [rsp+5F0h] [rbp+4F0h]
  const wchar_t *v263; // [rsp+5F8h] [rbp+4F8h]
  int *v264; // [rsp+600h] [rbp+500h]
  int v265; // [rsp+608h] [rbp+508h]
  int *v266; // [rsp+610h] [rbp+510h]
  int v267; // [rsp+618h] [rbp+518h]
  __int64 v268; // [rsp+620h] [rbp+520h]
  int v269; // [rsp+628h] [rbp+528h]
  const wchar_t *v270; // [rsp+630h] [rbp+530h]
  int *v271; // [rsp+638h] [rbp+538h]
  int v272; // [rsp+640h] [rbp+540h]
  int *v273; // [rsp+648h] [rbp+548h]
  int v274; // [rsp+650h] [rbp+550h]
  __int64 v275; // [rsp+658h] [rbp+558h]
  int v276; // [rsp+660h] [rbp+560h]
  const wchar_t *v277; // [rsp+668h] [rbp+568h]
  int *v278; // [rsp+670h] [rbp+570h]
  int v279; // [rsp+678h] [rbp+578h]
  int *v280; // [rsp+680h] [rbp+580h]
  int v281; // [rsp+688h] [rbp+588h]
  __int64 v282; // [rsp+690h] [rbp+590h]
  int v283; // [rsp+698h] [rbp+598h]
  const wchar_t *v284; // [rsp+6A0h] [rbp+5A0h]
  int *v285; // [rsp+6A8h] [rbp+5A8h]
  int v286; // [rsp+6B0h] [rbp+5B0h]
  int *v287; // [rsp+6B8h] [rbp+5B8h]
  int v288; // [rsp+6C0h] [rbp+5C0h]
  __int64 v289; // [rsp+6C8h] [rbp+5C8h]
  int v290; // [rsp+6D0h] [rbp+5D0h]
  const wchar_t *v291; // [rsp+6D8h] [rbp+5D8h]
  int *v292; // [rsp+6E0h] [rbp+5E0h]
  int v293; // [rsp+6E8h] [rbp+5E8h]
  int *v294; // [rsp+6F0h] [rbp+5F0h]
  int v295; // [rsp+6F8h] [rbp+5F8h]
  __int64 v296; // [rsp+700h] [rbp+600h]
  int v297; // [rsp+708h] [rbp+608h]
  const wchar_t *v298; // [rsp+710h] [rbp+610h]
  int *v299; // [rsp+718h] [rbp+618h]
  int v300; // [rsp+720h] [rbp+620h]
  int *v301; // [rsp+728h] [rbp+628h]
  int v302; // [rsp+730h] [rbp+630h]
  __int64 v303; // [rsp+738h] [rbp+638h]
  int v304; // [rsp+740h] [rbp+640h]
  const wchar_t *v305; // [rsp+748h] [rbp+648h]
  int *v306; // [rsp+750h] [rbp+650h]
  int v307; // [rsp+758h] [rbp+658h]
  int *v308; // [rsp+760h] [rbp+660h]
  int v309; // [rsp+768h] [rbp+668h]
  __int64 v310; // [rsp+770h] [rbp+670h]
  int v311; // [rsp+778h] [rbp+678h]
  const wchar_t *v312; // [rsp+780h] [rbp+680h]
  int *v313; // [rsp+788h] [rbp+688h]
  int v314; // [rsp+790h] [rbp+690h]
  int *v315; // [rsp+798h] [rbp+698h]
  int v316; // [rsp+7A0h] [rbp+6A0h]
  __int64 v317; // [rsp+7A8h] [rbp+6A8h]
  int v318; // [rsp+7B0h] [rbp+6B0h]
  const wchar_t *v319; // [rsp+7B8h] [rbp+6B8h]
  int *v320; // [rsp+7C0h] [rbp+6C0h]
  int v321; // [rsp+7C8h] [rbp+6C8h]
  int *v322; // [rsp+7D0h] [rbp+6D0h]
  int v323; // [rsp+7D8h] [rbp+6D8h]
  __int64 v324; // [rsp+7E0h] [rbp+6E0h]
  int v325; // [rsp+7E8h] [rbp+6E8h]
  const wchar_t *v326; // [rsp+7F0h] [rbp+6F0h]
  int *v327; // [rsp+7F8h] [rbp+6F8h]
  int v328; // [rsp+800h] [rbp+700h]
  int *v329; // [rsp+808h] [rbp+708h]
  int v330; // [rsp+810h] [rbp+710h]
  __int64 v331; // [rsp+818h] [rbp+718h]
  int v332; // [rsp+820h] [rbp+720h]
  const wchar_t *v333; // [rsp+828h] [rbp+728h]
  int *v334; // [rsp+830h] [rbp+730h]
  int v335; // [rsp+838h] [rbp+738h]
  int *v336; // [rsp+840h] [rbp+740h]
  int v337; // [rsp+848h] [rbp+748h]
  __int64 v338; // [rsp+850h] [rbp+750h]
  int v339; // [rsp+858h] [rbp+758h]
  const wchar_t *v340; // [rsp+860h] [rbp+760h]
  int *v341; // [rsp+868h] [rbp+768h]
  int v342; // [rsp+870h] [rbp+770h]
  int *v343; // [rsp+878h] [rbp+778h]
  int v344; // [rsp+880h] [rbp+780h]
  __int64 v345; // [rsp+888h] [rbp+788h]
  int v346; // [rsp+890h] [rbp+790h]
  const wchar_t *v347; // [rsp+898h] [rbp+798h]
  int *v348; // [rsp+8A0h] [rbp+7A0h]
  int v349; // [rsp+8A8h] [rbp+7A8h]
  int *v350; // [rsp+8B0h] [rbp+7B0h]
  int v351; // [rsp+8B8h] [rbp+7B8h]
  __int64 v352; // [rsp+8C0h] [rbp+7C0h]
  int v353; // [rsp+8C8h] [rbp+7C8h]
  const wchar_t *v354; // [rsp+8D0h] [rbp+7D0h]
  int *v355; // [rsp+8D8h] [rbp+7D8h]
  int v356; // [rsp+8E0h] [rbp+7E0h]
  int *v357; // [rsp+8E8h] [rbp+7E8h]
  int v358; // [rsp+8F0h] [rbp+7F0h]
  __int64 v359; // [rsp+8F8h] [rbp+7F8h]
  int v360; // [rsp+900h] [rbp+800h]
  const wchar_t *v361; // [rsp+908h] [rbp+808h]
  unsigned int *v362; // [rsp+910h] [rbp+810h]
  int v363; // [rsp+918h] [rbp+818h]
  int *v364; // [rsp+920h] [rbp+820h]
  int v365; // [rsp+928h] [rbp+828h]
  __int64 v366; // [rsp+930h] [rbp+830h]
  int v367; // [rsp+938h] [rbp+838h]
  const wchar_t *v368; // [rsp+940h] [rbp+840h]
  int *v369; // [rsp+948h] [rbp+848h]
  int v370; // [rsp+950h] [rbp+850h]
  int *v371; // [rsp+958h] [rbp+858h]
  int v372; // [rsp+960h] [rbp+860h]
  __int64 v373; // [rsp+968h] [rbp+868h]
  int v374; // [rsp+970h] [rbp+870h]
  const wchar_t *v375; // [rsp+978h] [rbp+878h]
  int *v376; // [rsp+980h] [rbp+880h]
  int v377; // [rsp+988h] [rbp+888h]
  int *v378; // [rsp+990h] [rbp+890h]
  int v379; // [rsp+998h] [rbp+898h]
  __int64 v380; // [rsp+9A0h] [rbp+8A0h]
  int v381; // [rsp+9A8h] [rbp+8A8h]
  const wchar_t *v382; // [rsp+9B0h] [rbp+8B0h]
  int *v383; // [rsp+9B8h] [rbp+8B8h]
  int v384; // [rsp+9C0h] [rbp+8C0h]
  int *v385; // [rsp+9C8h] [rbp+8C8h]
  int v386; // [rsp+9D0h] [rbp+8D0h]
  __int64 v387; // [rsp+9D8h] [rbp+8D8h]
  int v388; // [rsp+9E0h] [rbp+8E0h]
  const wchar_t *v389; // [rsp+9E8h] [rbp+8E8h]
  int *v390; // [rsp+9F0h] [rbp+8F0h]
  int v391; // [rsp+9F8h] [rbp+8F8h]
  int *v392; // [rsp+A00h] [rbp+900h]
  int v393; // [rsp+A08h] [rbp+908h]
  __int64 v394; // [rsp+A10h] [rbp+910h]
  int v395; // [rsp+A18h] [rbp+918h]
  const wchar_t *v396; // [rsp+A20h] [rbp+920h]
  int *v397; // [rsp+A28h] [rbp+928h]
  int v398; // [rsp+A30h] [rbp+930h]
  int *v399; // [rsp+A38h] [rbp+938h]
  int v400; // [rsp+A40h] [rbp+940h]
  __int64 v401; // [rsp+A48h] [rbp+948h]
  int v402; // [rsp+A50h] [rbp+950h]
  const wchar_t *v403; // [rsp+A58h] [rbp+958h]
  int *v404; // [rsp+A60h] [rbp+960h]
  int v405; // [rsp+A68h] [rbp+968h]
  int *v406; // [rsp+A70h] [rbp+970h]
  int v407; // [rsp+A78h] [rbp+978h]
  __int64 v408; // [rsp+A80h] [rbp+980h]
  int v409; // [rsp+A88h] [rbp+988h]
  const wchar_t *v410; // [rsp+A90h] [rbp+990h]
  int *v411; // [rsp+A98h] [rbp+998h]
  int v412; // [rsp+AA0h] [rbp+9A0h]
  int *v413; // [rsp+AA8h] [rbp+9A8h]
  int v414; // [rsp+AB0h] [rbp+9B0h]
  __int64 v415; // [rsp+AB8h] [rbp+9B8h]
  int v416; // [rsp+AC0h] [rbp+9C0h]
  const wchar_t *v417; // [rsp+AC8h] [rbp+9C8h]
  int *v418; // [rsp+AD0h] [rbp+9D0h]
  int v419; // [rsp+AD8h] [rbp+9D8h]
  int *v420; // [rsp+AE0h] [rbp+9E0h]
  int v421; // [rsp+AE8h] [rbp+9E8h]
  __int64 v422; // [rsp+AF0h] [rbp+9F0h]
  int v423; // [rsp+AF8h] [rbp+9F8h]
  const wchar_t *v424; // [rsp+B00h] [rbp+A00h]
  int *v425; // [rsp+B08h] [rbp+A08h]
  int v426; // [rsp+B10h] [rbp+A10h]
  int *v427; // [rsp+B18h] [rbp+A18h]
  int v428; // [rsp+B20h] [rbp+A20h]
  __int64 v429; // [rsp+B28h] [rbp+A28h]
  int v430; // [rsp+B30h] [rbp+A30h]
  const wchar_t *v431; // [rsp+B38h] [rbp+A38h]
  int *v432; // [rsp+B40h] [rbp+A40h]
  int v433; // [rsp+B48h] [rbp+A48h]
  int *v434; // [rsp+B50h] [rbp+A50h]
  int v435; // [rsp+B58h] [rbp+A58h]
  __int64 v436; // [rsp+B60h] [rbp+A60h]
  int v437; // [rsp+B68h] [rbp+A68h]
  const wchar_t *v438; // [rsp+B70h] [rbp+A70h]
  int *v439; // [rsp+B78h] [rbp+A78h]
  int v440; // [rsp+B80h] [rbp+A80h]
  int *v441; // [rsp+B88h] [rbp+A88h]
  int v442; // [rsp+B90h] [rbp+A90h]
  __int64 v443; // [rsp+B98h] [rbp+A98h]
  int v444; // [rsp+BA0h] [rbp+AA0h]
  const wchar_t *v445; // [rsp+BA8h] [rbp+AA8h]
  int *v446; // [rsp+BB0h] [rbp+AB0h]
  int v447; // [rsp+BB8h] [rbp+AB8h]
  int *v448; // [rsp+BC0h] [rbp+AC0h]
  int v449; // [rsp+BC8h] [rbp+AC8h]
  __int64 v450; // [rsp+BD0h] [rbp+AD0h]
  int v451; // [rsp+BD8h] [rbp+AD8h]
  const wchar_t *v452; // [rsp+BE0h] [rbp+AE0h]
  int *v453; // [rsp+BE8h] [rbp+AE8h]
  int v454; // [rsp+BF0h] [rbp+AF0h]
  int *v455; // [rsp+BF8h] [rbp+AF8h]
  int v456; // [rsp+C00h] [rbp+B00h]
  __int64 v457; // [rsp+C08h] [rbp+B08h]
  int v458; // [rsp+C10h] [rbp+B10h]
  const wchar_t *v459; // [rsp+C18h] [rbp+B18h]
  int *v460; // [rsp+C20h] [rbp+B20h]
  int v461; // [rsp+C28h] [rbp+B28h]
  int *v462; // [rsp+C30h] [rbp+B30h]
  int v463; // [rsp+C38h] [rbp+B38h]
  __int64 v464; // [rsp+C40h] [rbp+B40h]
  int v465; // [rsp+C48h] [rbp+B48h]
  const wchar_t *v466; // [rsp+C50h] [rbp+B50h]
  int *v467; // [rsp+C58h] [rbp+B58h]
  int v468; // [rsp+C60h] [rbp+B60h]
  int *v469; // [rsp+C68h] [rbp+B68h]
  int v470; // [rsp+C70h] [rbp+B70h]
  __int64 v471; // [rsp+C78h] [rbp+B78h]
  int v472; // [rsp+C80h] [rbp+B80h]
  __int64 v473; // [rsp+C88h] [rbp+B88h]
  __int128 v474; // [rsp+C90h] [rbp+B90h]
  __int128 v475; // [rsp+CA0h] [rbp+BA0h]

  v126 = 16LL;
  v79 = 0;
  v125 = 1395864371LL;
  v127 = 1395864371LL;
  v68 = 0;
  v80 = 0;
  v85 = 7000;
  v47 = 7000;
  v111 = 30000;
  v55 = 30000;
  v112 = 5000;
  v56 = 5000;
  v113 = 500;
  v69 = 0;
  v84 = 0;
  v70 = 0;
  v82 = 0;
  v41 = 0;
  v36 = 0;
  v35 = 0;
  v37 = 0;
  v33 = 0;
  v81 = 1;
  v39 = 1;
  v83 = 0;
  v40 = 0;
  v86 = 0;
  v42 = 0;
  v87 = 0;
  v43 = 0;
  v88 = 0;
  v44 = 0;
  v89 = 0;
  v45 = 0;
  v90 = 0;
  v46 = 0;
  v91 = 1;
  v48 = 1;
  v92 = 0;
  v76 = 0;
  v93 = 0;
  v49 = 0;
  v95 = 0;
  v50 = 0;
  v94 = 0;
  v51 = 0;
  v96 = 0;
  v77 = 0;
  v97 = 1;
  v71 = 1;
  v98 = 0;
  v72 = 0;
  v100 = 0;
  v99 = 0;
  v101 = 0;
  v74 = 0;
  v103 = 0;
  v102 = 0;
  v104 = 0;
  v75 = 0;
  v105 = 0;
  v73 = 0;
  v106 = 0;
  v52 = 0;
  v107 = 0;
  v53 = 0;
  v108 = 0;
  v78 = 0;
  v109 = 1;
  v34 = 1;
  v110 = 0;
  v54 = 0;
  v57 = 500;
  v114 = 0;
  v58 = 0;
  v115 = 0;
  v130 = L"ForceDirectFlip";
  v67 = 0;
  v131 = &v68;
  v133 = &v79;
  v137 = L"DisableOverlays";
  v138 = &v69;
  v140 = &v80;
  v144 = L"EnableOfferReclaimOnDriver";
  v145 = &v39;
  v147 = &v81;
  v151 = L"LeanMemoryLimit";
  v152 = &v126;
  v154 = &v125;
  v158 = L"ForceEnableDxgMms2";
  v159 = &v41;
  v161 = &v82;
  v165 = L"ContextNoPatchMode";
  v116 = 2;
  v59 = 2;
  v117 = 1;
  v60 = 1;
  v118 = 0;
  v61 = 0;
  v119 = 0;
  v62 = 0;
  v120 = 1;
  v63 = 1;
  v121 = 1;
  v64 = 1;
  v122 = 1;
  v65 = 1;
  v123 = 1;
  v66 = 1;
  v124 = 0;
  v38 = 0;
  v128 = 0LL;
  v129 = 288;
  v132 = 67108868;
  v134 = 4;
  v135 = 0LL;
  v136 = 288;
  v139 = 67108868;
  v141 = 4;
  v142 = 0LL;
  v143 = 288;
  v146 = 67108868;
  v148 = 4;
  v149 = 0LL;
  v150 = 288;
  v153 = 184549387;
  v155 = 8;
  v156 = 0LL;
  v157 = 288;
  v160 = 67108868;
  v162 = 4;
  v163 = 0LL;
  v164 = 288;
  v167 = 67108868;
  v166 = &v40;
  v169 = 4;
  v168 = &v83;
  v170 = 0LL;
  v173 = &v35;
  v175 = &v36;
  v180 = &v33;
  v182 = &v37;
  v186 = L"Force32BitFences";
  v187 = &v70;
  v189 = &v84;
  v193 = L"InitialPagingQueueFenceValue";
  v194 = &v47;
  v196 = &v85;
  v200 = L"ForceInitPagingProcessVaSpace";
  v201 = &v42;
  v203 = &v86;
  v207 = L"DisableGdiContextGpuVa";
  v208 = &v43;
  v210 = &v87;
  v214 = L"DisablePagingContextGpuVa";
  v215 = &v44;
  v217 = &v88;
  v221 = L"DisableMonitoredFenceGpuVa";
  v171 = 288;
  v172 = L"ForceToMapGpuVa";
  v174 = 67108868;
  v176 = 4;
  v177 = 0LL;
  v178 = 288;
  v179 = L"ForceAccessedPhysically";
  v181 = 67108868;
  v183 = 4;
  v184 = 0LL;
  v185 = 288;
  v188 = 67108868;
  v190 = 4;
  v191 = 0LL;
  v192 = 288;
  v195 = 67108868;
  v197 = 4;
  v198 = 0LL;
  v199 = 288;
  v202 = 67108868;
  v204 = 4;
  v205 = 0LL;
  v206 = 288;
  v209 = 67108868;
  v211 = 4;
  v212 = 0LL;
  v213 = 288;
  v216 = 67108868;
  v218 = 4;
  v219 = 0LL;
  v220 = 288;
  v222 = &v45;
  v224 = &v89;
  v228 = L"ForceExplicitResidencyNotification";
  v229 = &v46;
  v231 = &v90;
  v236 = &v35;
  v238 = &v36;
  v243 = &v33;
  v245 = &v37;
  v249 = L"DriverManagesResidencyOverride";
  v250 = &v48;
  v252 = &v91;
  v256 = L"GdiPhysicalAdapterIndex";
  v257 = &v76;
  v259 = &v92;
  v263 = L"ForceReplicateGdiContent";
  v264 = &v49;
  v266 = &v93;
  v270 = L"EnableTimedCalls";
  v271 = &v51;
  v273 = &v94;
  v277 = L"CreateGdiPrimaryOnSlaveGpu";
  v278 = &v50;
  v223 = 67108868;
  v225 = 4;
  v226 = 0LL;
  v227 = 288;
  v230 = 67108868;
  v232 = 4;
  v233 = 0LL;
  v234 = 288;
  v235 = L"ForceToMapGpuVa";
  v237 = 67108868;
  v239 = 4;
  v240 = 0LL;
  v241 = 288;
  v242 = L"ForceAccessedPhysically";
  v244 = 67108868;
  v246 = 4;
  v247 = 0LL;
  v248 = 288;
  v251 = 67108868;
  v253 = 4;
  v254 = 0LL;
  v255 = 288;
  v258 = 67108868;
  v260 = 4;
  v261 = 0LL;
  v262 = 288;
  v265 = 67108868;
  v267 = 4;
  v268 = 0LL;
  v269 = 288;
  v272 = 67108868;
  v274 = 4;
  v275 = 0LL;
  v276 = 288;
  v279 = 67108868;
  v280 = &v95;
  v284 = L"ForceSurpriseRemovalSupport";
  v285 = &v77;
  v287 = &v96;
  v291 = L"EnableDecodeMPO";
  v292 = &v71;
  v294 = &v97;
  v298 = L"DisableBadDriverCheckForHwProtection";
  v299 = &v72;
  v301 = &v98;
  v305 = L"ForceSecondaryMPOSupport";
  v306 = &v99;
  v308 = &v100;
  v312 = L"ForceSecondaryIFlipSupport";
  v313 = &v74;
  v315 = &v101;
  v319 = L"EnablePanelFitterSupport";
  v320 = &v102;
  v322 = &v103;
  v326 = L"EnableMultiPlaneOverlay3DDIs";
  v327 = &v75;
  v329 = &v104;
  v333 = L"DisableSecondaryIFlipSupport";
  v334 = &v73;
  v336 = &v105;
  v281 = 4;
  v282 = 0LL;
  v283 = 288;
  v286 = 67108868;
  v288 = 4;
  v289 = 0LL;
  v290 = 288;
  v293 = 67108868;
  v295 = 4;
  v296 = 0LL;
  v297 = 288;
  v300 = 67108868;
  v302 = 4;
  v303 = 0LL;
  v304 = 288;
  v307 = 67108868;
  v309 = 4;
  v310 = 0LL;
  v311 = 288;
  v314 = 67108868;
  v316 = 4;
  v317 = 0LL;
  v318 = 288;
  v321 = 67108868;
  v323 = 4;
  v324 = 0LL;
  v325 = 288;
  v328 = 67108868;
  v330 = 4;
  v331 = 0LL;
  v332 = 288;
  v335 = 67108868;
  v337 = 4;
  v340 = L"EnableWDDM23Synchronization";
  v341 = &v52;
  v343 = &v106;
  v347 = L"IoMmuFlags";
  v348 = &v53;
  v350 = &v107;
  v354 = L"DisableMultiSourceMPOCheck";
  v355 = &v78;
  v357 = &v108;
  v361 = L"DriverStoreCopyMode";
  v362 = &v34;
  v364 = &v109;
  v368 = L"ForceVariableRefresh";
  v369 = &v54;
  v371 = &v110;
  v375 = L"DeadlockTimeout";
  v376 = &v55;
  v378 = &v111;
  v382 = L"DeadlockPulse";
  v383 = &v56;
  v385 = &v112;
  v389 = L"DeadlockPulseTolerance";
  v390 = &v57;
  v392 = &v113;
  v338 = 0LL;
  v339 = 288;
  v342 = 67108868;
  v344 = 4;
  v345 = 0LL;
  v346 = 288;
  v349 = 67108868;
  v351 = 4;
  v352 = 0LL;
  v353 = 288;
  v356 = 67108868;
  v358 = 4;
  v359 = 0LL;
  v360 = 288;
  v363 = 67108868;
  v365 = 4;
  v366 = 0LL;
  v367 = 288;
  v370 = 67108868;
  v372 = 4;
  v373 = 0LL;
  v374 = 288;
  v377 = 67108868;
  v379 = 4;
  v380 = 0LL;
  v381 = 288;
  v384 = 67108868;
  v386 = 4;
  v387 = 0LL;
  v388 = 288;
  v391 = 67108868;
  v393 = 4;
  v394 = 0LL;
  v396 = L"DisableIndependentVidPnVSync";
  v397 = &v58;
  v399 = &v114;
  v403 = L"NumVirtualFunctions";
  v404 = &v67;
  v406 = &v115;
  v410 = L"CrtcPhaseFrames";
  v411 = &v59;
  v413 = &v116;
  v417 = L"EnableFbrValidation";
  v418 = &v60;
  v420 = &v117;
  v424 = L"DisableBoostedVSyncVirtualization";
  v425 = &v61;
  v427 = &v118;
  v431 = L"EnableBasicRenderGpuPv";
  v432 = &v62;
  v434 = &v119;
  v438 = L"KnownProcessBoostMode";
  v439 = &v63;
  v441 = &v120;
  v445 = L"SmallQuantumMode";
  v446 = &v64;
  v448 = &v121;
  v395 = 288;
  v398 = 67108868;
  v400 = 4;
  v401 = 0LL;
  v402 = 288;
  v405 = 67108868;
  v407 = 4;
  v408 = 0LL;
  v409 = 288;
  v412 = 67108868;
  v414 = 4;
  v415 = 0LL;
  v416 = 288;
  v419 = 67108868;
  v421 = 4;
  v422 = 0LL;
  v423 = 288;
  v426 = 67108868;
  v428 = 4;
  v429 = 0LL;
  v430 = 288;
  v433 = 67108868;
  v435 = 4;
  v436 = 0LL;
  v437 = 288;
  v440 = 67108868;
  v442 = 4;
  v443 = 0LL;
  v444 = 288;
  v447 = 67108868;
  v449 = 4;
  v450 = 0LL;
  v454 = 67108868;
  v456 = 4;
  v452 = L"HighPriorityCompletionMode";
  v461 = 67108868;
  v453 = &v65;
  v463 = 4;
  v455 = &v122;
  v459 = L"GpuPriorityChangeMode";
  v460 = &v66;
  v462 = &v123;
  v466 = L"FaultAndStallValidation";
  v467 = &v38;
  v468 = 67108868;
  v470 = 4;
  v469 = &v124;
  v451 = 288;
  v457 = 0LL;
  v458 = 288;
  v464 = 0LL;
  v465 = 288;
  v471 = 0LL;
  v472 = 0;
  v473 = 0LL;
  v474 = 0LL;
  v475 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v128, 0LL, 0LL);
  v4 = v38;
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 64) = v4;
  v5 = v41 == 0;
  *((_BYTE *)this + 3061) = v39 != 0;
  *((_DWORD *)this + 768) = v40;
  *((_QWORD *)this + 383) = v127;
  v6 = !v5;
  v5 = v33 == 0;
  *((_BYTE *)this + 3076) = v6;
  v7 = !v5;
  v5 = v42 == 0;
  *((_BYTE *)this + 3077) = v7;
  v8 = !v5;
  v5 = v43 == 0;
  *((_BYTE *)this + 3079) = v8;
  v9 = !v5;
  v5 = v44 == 0;
  *((_BYTE *)this + 3080) = v9;
  v10 = !v5;
  v5 = v45 == 0;
  *((_BYTE *)this + 3081) = v10;
  v11 = !v5;
  v5 = v46 == 0;
  *((_BYTE *)this + 3082) = v11;
  v12 = !v5;
  v5 = v48 == 0;
  *((_BYTE *)this + 3078) = v12;
  *((_DWORD *)this + 783) = v47;
  *((_BYTE *)this + 3083) = !v5;
  if ( v49 || (v13 = 0, (*((_DWORD *)this + 627) & 0x100) != 0) )
    v13 = 1;
  v5 = v50 == 0;
  *((_BYTE *)this + 3062) = v13;
  v14 = !v5;
  v5 = v51 == 0;
  *((_BYTE *)this + 3063) = v14;
  DXGADAPTER::Config = !v5 | DXGADAPTER::Config & 0xFE;
  if ( !v52 || (v15 = 1, *((int *)this + 694) < 8704) )
    v15 = 0;
  v16 = v34 < 2;
  *((_BYTE *)this + 3092) = v15;
  *((_DWORD *)this + 775) = v53;
  v17 = 2;
  if ( v16 )
    v17 = v34;
  v5 = v54 == 0;
  *((_DWORD *)this + 776) = v17;
  v18 = !v5;
  v5 = v58 == 0;
  *((_BYTE *)this + 3108) = v18;
  *((_DWORD *)this + 1238) = v55;
  *((_DWORD *)this + 1239) = v56;
  *((_DWORD *)this + 1240) = v57;
  v19 = !v5;
  v5 = v60 == 0;
  *((_BYTE *)this + 3260) = v19;
  *((_DWORD *)this + 1116) = v59;
  v20 = !v5;
  v5 = v61 == 0;
  *((_BYTE *)this + 3109) = v20;
  v21 = !v5;
  v5 = g_OSTestSigningEnabled == 0;
  *((_BYTE *)this + 3110) = v21;
  if ( v5 || (v22 = 1, !v62) )
    v22 = 0;
  *((_BYTE *)this + 3111) = v22;
  *((_DWORD *)this + 779) = v63;
  *((_DWORD *)this + 780) = v64;
  *((_DWORD *)this + 781) = v65;
  *((_DWORD *)this + 782) = v66;
  if ( v67 )
    *((_DWORD *)this + 1212) = v67;
  if ( v68 )
    *((_BYTE *)this + 2979) = 1;
  if ( v69 )
    *((_BYTE *)this + 2980) = 0;
  if ( v70 )
    *((_DWORD *)this + 626) |= 0x20u;
  if ( *((_BYTE *)this + 2980) )
  {
    if ( *((_BYTE *)this + 3058) )
      *((_DWORD *)this + 746) = 2;
  }
  else
  {
    *((_DWORD *)this + 746) = 1;
  }
  if ( *((int *)this + 694) < 4608 )
    *((_BYTE *)this + 3061) = 0;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    *((_BYTE *)this + 3083) = 0;
  if ( !v71 || (v25 = 1, !v23) )
    v25 = 0;
  v5 = v72 == 0;
  *((_BYTE *)this + 3084) = v25;
  *((_BYTE *)this + 3087) = 0;
  *((_BYTE *)this + 3085) = !v5;
  if ( !v73 && (*((_DWORD *)this + 625) & 0x10) != 0 )
  {
    v26 = *((_DWORD *)this + 694);
    if ( v26 < 8448 )
    {
      if ( v26 >= 0x2000 )
        *((_BYTE *)this + 3087) = v74 != 0;
    }
    else
    {
      *((_BYTE *)this + 3087) = 1;
    }
  }
  v5 = *((_QWORD *)this + 80) == 0LL;
  *((_BYTE *)this + 3089) = 0;
  *((_BYTE *)this + 3096) = !v5;
  v27 = 0;
  if ( *((_QWORD *)this + 129) )
  {
    v28 = *((_DWORD *)this + 694);
    v27 = v28 >= v24 || v28 >= 8448 && ((*((_DWORD *)this + 111) & 0x200) != 0 || v75);
    *((_BYTE *)this + 3089) = v27;
  }
  v29 = *((_BYTE *)this + 2980);
  if ( v29 && !v27 && !*((_QWORD *)this + 109) && !*((_QWORD *)this + 125) )
  {
    *((_BYTE *)this + 2980) = 0;
    v29 = 0;
  }
  *((_BYTE *)this + 3090) = 0;
  if ( v27 && *((_DWORD *)this + 694) >= v24 && (*((_QWORD *)this + 153) || *((_QWORD *)this + 154)) )
  {
    v30 = (_DWORD *)((char *)this + 3012);
    *((_BYTE *)this + 3090) = 1;
    v31 = (_DWORD *)((char *)this + 3012);
  }
  else
  {
    v30 = (_DWORD *)((char *)this + 3012);
    v31 = (_DWORD *)((char *)this + 3012);
    if ( !v27 )
    {
LABEL_57:
      *v30 = 1;
      goto LABEL_58;
    }
  }
  if ( !*v31 )
    goto LABEL_57;
LABEL_58:
  *((_BYTE *)this + 3088) = v27;
  if ( !v27 || (v32 = 1, !v29) )
    v32 = 0;
  *((_BYTE *)this + 3086) = v32;
  if ( *((_DWORD *)this + 74) > 1u )
    *((_DWORD *)this + 797) = v76;
  if ( v77 )
    *(_BYTE *)a2 |= 0x10u;
  *((_BYTE *)this + 3091) = v78 != 0;
}
