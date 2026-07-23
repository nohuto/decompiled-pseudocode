/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x1403F5200
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403F8170 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1405B8790 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x140791080 (FsRtlCheckUpperOplock.c)
 *     FsRtlOplockBreakH2 @ 0x140AB7FB0 (FsRtlOplockBreakH2.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x140B3F290 (FsRtlCheckOplockForFsFilterCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F47AC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1403F4D08 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x1403F4F58 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockKeysEqual @ 0x1403F7C60 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FAF90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403FB0D4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404CE5A4 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpDoBoost @ 0x1404DC574 (FsRtlpDoBoost.c)
 *     FsRtlpWaitOnIrp @ 0x1404E5834 (FsRtlpWaitOnIrp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077E784 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     FsRtlpCheckSharingAgainstOplockOwner @ 0x140919890 (FsRtlpCheckSharingAgainstOplockOwner.c)
 *     FsRtlpFillOutputBuffer @ 0x140ADA4D4 (FsRtlpFillOutputBuffer.c)
 *     FsRtlpBreakRHOplocksForNonCachedIo @ 0x140B717F0 (FsRtlpBreakRHOplocksForNonCachedIo.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        IRP *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned int *a7,
        unsigned __int16 *a8,
        __int64 a9,
        __int64 a10,
        _BYTE *a11,
        __int64 a12)
{
  __int64 v13; // r9
  int v15; // esi
  char v16; // bl
  int v17; // edx
  unsigned int *v18; // r12
  int v19; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  char v25; // dl
  __int64 v26; // r9
  _QWORD *n; // r12
  _QWORD **ii; // r12
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  char v32; // cl
  int v33; // eax
  __int64 v34; // rax
  _QWORD *v35; // r12
  int v36; // eax
  unsigned int v37; // eax
  _QWORD *v38; // r14
  char v39; // r12
  int v40; // eax
  IRP *v41; // r14
  int v42; // eax
  PIRP v43; // r14
  int v44; // eax
  int v45; // eax
  unsigned __int16 v46; // kr00_2
  _QWORD *i; // r14
  __int64 j; // rcx
  _QWORD *v49; // rcx
  PIRP v50; // r14
  _QWORD **k; // r12
  _QWORD *v52; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v53; // rax
  char *v54; // rdx
  __int64 m; // rcx
  _QWORD *v56; // rcx
  __int64 *v57; // r10
  __int64 *v58; // r10
  int v59; // edx
  int v60; // eax
  unsigned __int16 v61; // cx
  char v62; // al
  int v63; // eax
  PIRP v64; // r14
  CCHAR v65; // r9
  PIRP v66; // r14
  int v67; // r12d
  int v68; // eax
  __int16 v69; // cx
  char v70; // r8
  __int64 v71; // r14
  char v72; // al
  int v73; // eax
  __int64 v74; // rcx
  int v75; // r9d
  unsigned int CurrentThread; // esi
  void *v77; // rcx
  _QWORD *jj; // rbx
  int RelatedActivityId; // [rsp+28h] [rbp-CF0h]
  __int16 v80; // [rsp+44h] [rbp-CD4h] BYREF
  IRP *v81; // [rsp+48h] [rbp-CD0h] BYREF
  char v82; // [rsp+50h] [rbp-CC8h]
  char v83; // [rsp+51h] [rbp-CC7h]
  bool v84; // [rsp+52h] [rbp-CC6h]
  int v85; // [rsp+54h] [rbp-CC4h]
  int v86; // [rsp+58h] [rbp-CC0h] BYREF
  char v87; // [rsp+5Ch] [rbp-CBCh]
  unsigned int v88; // [rsp+60h] [rbp-CB8h] BYREF
  _QWORD **v89; // [rsp+68h] [rbp-CB0h]
  __int64 v90; // [rsp+70h] [rbp-CA8h] BYREF
  char v91; // [rsp+78h] [rbp-CA0h]
  bool v92; // [rsp+79h] [rbp-C9Fh]
  __int64 *v93; // [rsp+80h] [rbp-C98h] BYREF
  int v94; // [rsp+88h] [rbp-C90h] BYREF
  unsigned int v95; // [rsp+8Ch] [rbp-C8Ch] BYREF
  unsigned int v96; // [rsp+90h] [rbp-C88h] BYREF
  int v97; // [rsp+94h] [rbp-C84h] BYREF
  unsigned int v98; // [rsp+98h] [rbp-C80h] BYREF
  int v99; // [rsp+9Ch] [rbp-C7Ch] BYREF
  int v100; // [rsp+A0h] [rbp-C78h] BYREF
  int v101; // [rsp+A4h] [rbp-C74h] BYREF
  unsigned int v102; // [rsp+A8h] [rbp-C70h] BYREF
  int v103; // [rsp+ACh] [rbp-C6Ch] BYREF
  int v104; // [rsp+B0h] [rbp-C68h] BYREF
  int v105; // [rsp+B4h] [rbp-C64h] BYREF
  unsigned int v106; // [rsp+B8h] [rbp-C60h] BYREF
  int v107; // [rsp+BCh] [rbp-C5Ch] BYREF
  int v108; // [rsp+C0h] [rbp-C58h] BYREF
  unsigned int v109; // [rsp+C4h] [rbp-C54h] BYREF
  int v110; // [rsp+C8h] [rbp-C50h] BYREF
  int v111; // [rsp+CCh] [rbp-C4Ch] BYREF
  int v112; // [rsp+D0h] [rbp-C48h]
  unsigned int v113; // [rsp+D4h] [rbp-C44h] BYREF
  int v114; // [rsp+D8h] [rbp-C40h] BYREF
  int v115; // [rsp+DCh] [rbp-C3Ch] BYREF
  unsigned int v116; // [rsp+E0h] [rbp-C38h] BYREF
  int v117; // [rsp+E4h] [rbp-C34h] BYREF
  int v118; // [rsp+E8h] [rbp-C30h] BYREF
  int v119; // [rsp+ECh] [rbp-C2Ch] BYREF
  unsigned int v120; // [rsp+F0h] [rbp-C28h] BYREF
  int v121; // [rsp+F4h] [rbp-C24h] BYREF
  int v122; // [rsp+F8h] [rbp-C20h] BYREF
  unsigned int v123; // [rsp+FCh] [rbp-C1Ch] BYREF
  int v124; // [rsp+100h] [rbp-C18h] BYREF
  int v125; // [rsp+104h] [rbp-C14h] BYREF
  unsigned int v126; // [rsp+108h] [rbp-C10h] BYREF
  int v127; // [rsp+10Ch] [rbp-C0Ch] BYREF
  int v128; // [rsp+110h] [rbp-C08h] BYREF
  int v129; // [rsp+114h] [rbp-C04h]
  int v130; // [rsp+118h] [rbp-C00h] BYREF
  unsigned int v131; // [rsp+11Ch] [rbp-BFCh] BYREF
  int v132; // [rsp+120h] [rbp-BF8h] BYREF
  int v133; // [rsp+124h] [rbp-BF4h] BYREF
  int v134; // [rsp+128h] [rbp-BF0h] BYREF
  unsigned int v135; // [rsp+12Ch] [rbp-BECh] BYREF
  int v136; // [rsp+130h] [rbp-BE8h] BYREF
  int v137; // [rsp+134h] [rbp-BE4h] BYREF
  int v138; // [rsp+138h] [rbp-BE0h] BYREF
  unsigned int v139; // [rsp+13Ch] [rbp-BDCh] BYREF
  int v140; // [rsp+140h] [rbp-BD8h] BYREF
  int v141; // [rsp+144h] [rbp-BD4h] BYREF
  unsigned int v142; // [rsp+148h] [rbp-BD0h] BYREF
  int v143; // [rsp+14Ch] [rbp-BCCh] BYREF
  int v144; // [rsp+150h] [rbp-BC8h] BYREF
  unsigned int v145; // [rsp+154h] [rbp-BC4h] BYREF
  int v146; // [rsp+158h] [rbp-BC0h] BYREF
  int v147; // [rsp+15Ch] [rbp-BBCh] BYREF
  unsigned int v148; // [rsp+160h] [rbp-BB8h] BYREF
  int v149; // [rsp+164h] [rbp-BB4h] BYREF
  int v150; // [rsp+168h] [rbp-BB0h] BYREF
  unsigned int v151; // [rsp+16Ch] [rbp-BACh] BYREF
  int v152; // [rsp+170h] [rbp-BA8h] BYREF
  int v153; // [rsp+174h] [rbp-BA4h] BYREF
  unsigned int v154; // [rsp+178h] [rbp-BA0h] BYREF
  int v155; // [rsp+17Ch] [rbp-B9Ch] BYREF
  int v156; // [rsp+180h] [rbp-B98h] BYREF
  unsigned int v157; // [rsp+184h] [rbp-B94h] BYREF
  int v158; // [rsp+188h] [rbp-B90h] BYREF
  int v159; // [rsp+18Ch] [rbp-B8Ch] BYREF
  int v160; // [rsp+190h] [rbp-B88h] BYREF
  unsigned int v161; // [rsp+194h] [rbp-B84h] BYREF
  int v162; // [rsp+198h] [rbp-B80h] BYREF
  int v163; // [rsp+19Ch] [rbp-B7Ch] BYREF
  unsigned int v164; // [rsp+1A0h] [rbp-B78h] BYREF
  int v165; // [rsp+1A4h] [rbp-B74h] BYREF
  int v166; // [rsp+1A8h] [rbp-B70h] BYREF
  unsigned int v167; // [rsp+1ACh] [rbp-B6Ch] BYREF
  int v168; // [rsp+1B0h] [rbp-B68h] BYREF
  int v169; // [rsp+1B4h] [rbp-B64h] BYREF
  unsigned int v170; // [rsp+1B8h] [rbp-B60h] BYREF
  int v171; // [rsp+1BCh] [rbp-B5Ch] BYREF
  int v172; // [rsp+1C0h] [rbp-B58h] BYREF
  int v173; // [rsp+1C4h] [rbp-B54h] BYREF
  int v174; // [rsp+1C8h] [rbp-B50h] BYREF
  int v175; // [rsp+1CCh] [rbp-B4Ch] BYREF
  unsigned int v176; // [rsp+1D0h] [rbp-B48h] BYREF
  int v177; // [rsp+1D4h] [rbp-B44h] BYREF
  _QWORD *v178; // [rsp+1D8h] [rbp-B40h] BYREF
  __int64 v179; // [rsp+1E0h] [rbp-B38h] BYREF
  _QWORD *v180; // [rsp+1E8h] [rbp-B30h] BYREF
  __int64 v181; // [rsp+1F0h] [rbp-B28h] BYREF
  __int64 v182; // [rsp+1F8h] [rbp-B20h] BYREF
  __int64 v183; // [rsp+200h] [rbp-B18h] BYREF
  _BYTE *v184; // [rsp+208h] [rbp-B10h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+210h] [rbp-B08h] BYREF
  __int64 v186; // [rsp+220h] [rbp-AF8h] BYREF
  __int64 v187; // [rsp+228h] [rbp-AF0h] BYREF
  __int64 v188; // [rsp+230h] [rbp-AE8h] BYREF
  __int64 v189; // [rsp+238h] [rbp-AE0h] BYREF
  __int64 v190; // [rsp+240h] [rbp-AD8h] BYREF
  __int64 v191; // [rsp+248h] [rbp-AD0h] BYREF
  __int64 v192; // [rsp+250h] [rbp-AC8h] BYREF
  __int64 v193; // [rsp+258h] [rbp-AC0h] BYREF
  __int64 v194; // [rsp+260h] [rbp-AB8h] BYREF
  __int64 v195; // [rsp+268h] [rbp-AB0h] BYREF
  __int64 v196; // [rsp+270h] [rbp-AA8h] BYREF
  __int64 v197; // [rsp+278h] [rbp-AA0h] BYREF
  __int64 v198; // [rsp+280h] [rbp-A98h] BYREF
  __int64 v199; // [rsp+288h] [rbp-A90h] BYREF
  __int64 v200; // [rsp+290h] [rbp-A88h] BYREF
  __int64 v201; // [rsp+298h] [rbp-A80h] BYREF
  __int64 v202; // [rsp+2A0h] [rbp-A78h] BYREF
  EVENT_DESCRIPTOR v203; // [rsp+2A8h] [rbp-A70h] BYREF
  __int128 v204; // [rsp+2B8h] [rbp-A60h] BYREF
  __int64 v205; // [rsp+2C8h] [rbp-A50h]
  struct _EVENT_DATA_DESCRIPTOR v206; // [rsp+2D0h] [rbp-A48h] BYREF
  void *v207; // [rsp+2E0h] [rbp-A38h]
  int v208; // [rsp+2E8h] [rbp-A30h]
  int v209; // [rsp+2ECh] [rbp-A2Ch]
  unsigned int *v210; // [rsp+2F0h] [rbp-A28h]
  __int64 v211; // [rsp+2F8h] [rbp-A20h]
  unsigned int *v212; // [rsp+300h] [rbp-A18h]
  __int64 v213; // [rsp+308h] [rbp-A10h]
  int *v214; // [rsp+310h] [rbp-A08h]
  __int64 v215; // [rsp+318h] [rbp-A00h]
  _QWORD *v216; // [rsp+320h] [rbp-9F8h]
  __int64 v217; // [rsp+328h] [rbp-9F0h]
  unsigned int *v218; // [rsp+330h] [rbp-9E8h]
  __int64 v219; // [rsp+338h] [rbp-9E0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+340h] [rbp-9D8h] BYREF
  int *v221; // [rsp+350h] [rbp-9C8h]
  int v222; // [rsp+358h] [rbp-9C0h]
  int v223; // [rsp+35Ch] [rbp-9BCh]
  unsigned int *v224; // [rsp+360h] [rbp-9B8h]
  __int64 v225; // [rsp+368h] [rbp-9B0h]
  int *v226; // [rsp+370h] [rbp-9A8h]
  __int64 v227; // [rsp+378h] [rbp-9A0h]
  __int64 *v228; // [rsp+380h] [rbp-998h]
  __int64 v229; // [rsp+388h] [rbp-990h]
  unsigned int *v230; // [rsp+390h] [rbp-988h]
  __int64 v231; // [rsp+398h] [rbp-980h]
  struct _EVENT_DATA_DESCRIPTOR v232; // [rsp+3A0h] [rbp-978h] BYREF
  int *v233; // [rsp+3C0h] [rbp-958h]
  __int64 v234; // [rsp+3C8h] [rbp-950h]
  __int64 **v235; // [rsp+3D0h] [rbp-948h]
  __int64 v236; // [rsp+3D8h] [rbp-940h]
  __int64 *v237; // [rsp+3E0h] [rbp-938h]
  __int64 v238; // [rsp+3E8h] [rbp-930h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+3F0h] [rbp-928h]
  __int64 v240; // [rsp+3F8h] [rbp-920h]
  IRP **v241; // [rsp+400h] [rbp-918h]
  __int64 v242; // [rsp+408h] [rbp-910h]
  char v243; // [rsp+410h] [rbp-908h] BYREF
  int *v244; // [rsp+430h] [rbp-8E8h]
  __int64 v245; // [rsp+438h] [rbp-8E0h]
  unsigned int *v246; // [rsp+440h] [rbp-8D8h]
  __int64 v247; // [rsp+448h] [rbp-8D0h]
  int *v248; // [rsp+450h] [rbp-8C8h]
  __int64 v249; // [rsp+458h] [rbp-8C0h]
  __int64 *v250; // [rsp+460h] [rbp-8B8h]
  __int64 v251; // [rsp+468h] [rbp-8B0h]
  int *v252; // [rsp+470h] [rbp-8A8h]
  __int64 v253; // [rsp+478h] [rbp-8A0h]
  char v254; // [rsp+480h] [rbp-898h] BYREF
  int *v255; // [rsp+4A0h] [rbp-878h]
  __int64 v256; // [rsp+4A8h] [rbp-870h]
  unsigned int *v257; // [rsp+4B0h] [rbp-868h]
  __int64 v258; // [rsp+4B8h] [rbp-860h]
  int *v259; // [rsp+4C0h] [rbp-858h]
  __int64 v260; // [rsp+4C8h] [rbp-850h]
  __int64 *v261; // [rsp+4D0h] [rbp-848h]
  __int64 v262; // [rsp+4D8h] [rbp-840h]
  int *v263; // [rsp+4E0h] [rbp-838h]
  __int64 v264; // [rsp+4E8h] [rbp-830h]
  char v265; // [rsp+4F0h] [rbp-828h] BYREF
  int *v266; // [rsp+510h] [rbp-808h]
  __int64 v267; // [rsp+518h] [rbp-800h]
  unsigned int *v268; // [rsp+520h] [rbp-7F8h]
  __int64 v269; // [rsp+528h] [rbp-7F0h]
  int *v270; // [rsp+530h] [rbp-7E8h]
  __int64 v271; // [rsp+538h] [rbp-7E0h]
  _QWORD *v272; // [rsp+540h] [rbp-7D8h]
  __int64 v273; // [rsp+548h] [rbp-7D0h]
  int *v274; // [rsp+550h] [rbp-7C8h]
  __int64 v275; // [rsp+558h] [rbp-7C0h]
  char v276; // [rsp+560h] [rbp-7B8h] BYREF
  int *v277; // [rsp+580h] [rbp-798h]
  __int64 v278; // [rsp+588h] [rbp-790h]
  unsigned int *v279; // [rsp+590h] [rbp-788h]
  __int64 v280; // [rsp+598h] [rbp-780h]
  int *v281; // [rsp+5A0h] [rbp-778h]
  __int64 v282; // [rsp+5A8h] [rbp-770h]
  __int64 *v283; // [rsp+5B0h] [rbp-768h]
  __int64 v284; // [rsp+5B8h] [rbp-760h]
  int *v285; // [rsp+5C0h] [rbp-758h]
  __int64 v286; // [rsp+5C8h] [rbp-750h]
  char v287; // [rsp+5D0h] [rbp-748h] BYREF
  int *v288; // [rsp+5F0h] [rbp-728h]
  __int64 v289; // [rsp+5F8h] [rbp-720h]
  unsigned int *v290; // [rsp+600h] [rbp-718h]
  __int64 v291; // [rsp+608h] [rbp-710h]
  int *v292; // [rsp+610h] [rbp-708h]
  __int64 v293; // [rsp+618h] [rbp-700h]
  __int64 *v294; // [rsp+620h] [rbp-6F8h]
  __int64 v295; // [rsp+628h] [rbp-6F0h]
  int *v296; // [rsp+630h] [rbp-6E8h]
  __int64 v297; // [rsp+638h] [rbp-6E0h]
  char v298; // [rsp+640h] [rbp-6D8h] BYREF
  int *v299; // [rsp+660h] [rbp-6B8h]
  __int64 v300; // [rsp+668h] [rbp-6B0h]
  unsigned int *v301; // [rsp+670h] [rbp-6A8h]
  __int64 v302; // [rsp+678h] [rbp-6A0h]
  int *v303; // [rsp+680h] [rbp-698h]
  __int64 v304; // [rsp+688h] [rbp-690h]
  __int64 *v305; // [rsp+690h] [rbp-688h]
  __int64 v306; // [rsp+698h] [rbp-680h]
  int *v307; // [rsp+6A0h] [rbp-678h]
  __int64 v308; // [rsp+6A8h] [rbp-670h]
  char v309; // [rsp+6B0h] [rbp-668h] BYREF
  int *v310; // [rsp+6D0h] [rbp-648h]
  __int64 v311; // [rsp+6D8h] [rbp-640h]
  unsigned int *v312; // [rsp+6E0h] [rbp-638h]
  __int64 v313; // [rsp+6E8h] [rbp-630h]
  int *v314; // [rsp+6F0h] [rbp-628h]
  __int64 v315; // [rsp+6F8h] [rbp-620h]
  __int64 *v316; // [rsp+700h] [rbp-618h]
  __int64 v317; // [rsp+708h] [rbp-610h]
  int *v318; // [rsp+710h] [rbp-608h]
  __int64 v319; // [rsp+718h] [rbp-600h]
  char v320; // [rsp+720h] [rbp-5F8h] BYREF
  int *v321; // [rsp+740h] [rbp-5D8h]
  __int64 v322; // [rsp+748h] [rbp-5D0h]
  unsigned int *v323; // [rsp+750h] [rbp-5C8h]
  __int64 v324; // [rsp+758h] [rbp-5C0h]
  int *v325; // [rsp+760h] [rbp-5B8h]
  __int64 v326; // [rsp+768h] [rbp-5B0h]
  _BYTE **v327; // [rsp+770h] [rbp-5A8h]
  __int64 v328; // [rsp+778h] [rbp-5A0h]
  int *v329; // [rsp+780h] [rbp-598h]
  __int64 v330; // [rsp+788h] [rbp-590h]
  struct _EVENT_DATA_DESCRIPTOR v331; // [rsp+790h] [rbp-588h] BYREF
  unsigned int *v332; // [rsp+7B0h] [rbp-568h]
  __int64 v333; // [rsp+7B8h] [rbp-560h]
  int *v334; // [rsp+7C0h] [rbp-558h]
  __int64 v335; // [rsp+7C8h] [rbp-550h]
  __int64 *v336; // [rsp+7D0h] [rbp-548h]
  __int64 v337; // [rsp+7D8h] [rbp-540h]
  int *v338; // [rsp+7E0h] [rbp-538h]
  __int64 v339; // [rsp+7E8h] [rbp-530h]
  struct _EVENT_DATA_DESCRIPTOR v340; // [rsp+7F0h] [rbp-528h] BYREF
  unsigned int *v341; // [rsp+810h] [rbp-508h]
  __int64 v342; // [rsp+818h] [rbp-500h]
  int *v343; // [rsp+820h] [rbp-4F8h]
  __int64 v344; // [rsp+828h] [rbp-4F0h]
  __int64 *v345; // [rsp+830h] [rbp-4E8h]
  __int64 v346; // [rsp+838h] [rbp-4E0h]
  int *v347; // [rsp+840h] [rbp-4D8h]
  __int64 v348; // [rsp+848h] [rbp-4D0h]
  struct _EVENT_DATA_DESCRIPTOR v349; // [rsp+850h] [rbp-4C8h] BYREF
  unsigned int *v350; // [rsp+870h] [rbp-4A8h]
  __int64 v351; // [rsp+878h] [rbp-4A0h]
  int *v352; // [rsp+880h] [rbp-498h]
  __int64 v353; // [rsp+888h] [rbp-490h]
  __int64 *v354; // [rsp+890h] [rbp-488h]
  __int64 v355; // [rsp+898h] [rbp-480h]
  int *v356; // [rsp+8A0h] [rbp-478h]
  __int64 v357; // [rsp+8A8h] [rbp-470h]
  struct _EVENT_DATA_DESCRIPTOR v358; // [rsp+8B0h] [rbp-468h] BYREF
  unsigned int *v359; // [rsp+8D0h] [rbp-448h]
  __int64 v360; // [rsp+8D8h] [rbp-440h]
  int *v361; // [rsp+8E0h] [rbp-438h]
  __int64 v362; // [rsp+8E8h] [rbp-430h]
  __int64 *v363; // [rsp+8F0h] [rbp-428h]
  __int64 v364; // [rsp+8F8h] [rbp-420h]
  int *v365; // [rsp+900h] [rbp-418h]
  __int64 v366; // [rsp+908h] [rbp-410h]
  struct _EVENT_DATA_DESCRIPTOR v367; // [rsp+910h] [rbp-408h] BYREF
  unsigned int *v368; // [rsp+930h] [rbp-3E8h]
  __int64 v369; // [rsp+938h] [rbp-3E0h]
  int *v370; // [rsp+940h] [rbp-3D8h]
  __int64 v371; // [rsp+948h] [rbp-3D0h]
  __int64 *v372; // [rsp+950h] [rbp-3C8h]
  __int64 v373; // [rsp+958h] [rbp-3C0h]
  int *v374; // [rsp+960h] [rbp-3B8h]
  __int64 v375; // [rsp+968h] [rbp-3B0h]
  struct _EVENT_DATA_DESCRIPTOR v376; // [rsp+970h] [rbp-3A8h] BYREF
  unsigned int *v377; // [rsp+990h] [rbp-388h]
  __int64 v378; // [rsp+998h] [rbp-380h]
  int *v379; // [rsp+9A0h] [rbp-378h]
  __int64 v380; // [rsp+9A8h] [rbp-370h]
  _QWORD *v381; // [rsp+9B0h] [rbp-368h]
  __int64 v382; // [rsp+9B8h] [rbp-360h]
  int *v383; // [rsp+9C0h] [rbp-358h]
  __int64 v384; // [rsp+9C8h] [rbp-350h]
  struct _EVENT_DATA_DESCRIPTOR v385; // [rsp+9D0h] [rbp-348h] BYREF
  unsigned int *v386; // [rsp+9F0h] [rbp-328h]
  __int64 v387; // [rsp+9F8h] [rbp-320h]
  int *v388; // [rsp+A00h] [rbp-318h]
  __int64 v389; // [rsp+A08h] [rbp-310h]
  __int64 *v390; // [rsp+A10h] [rbp-308h]
  __int64 v391; // [rsp+A18h] [rbp-300h]
  int *v392; // [rsp+A20h] [rbp-2F8h]
  __int64 v393; // [rsp+A28h] [rbp-2F0h]
  struct _EVENT_DATA_DESCRIPTOR v394; // [rsp+A30h] [rbp-2E8h] BYREF
  unsigned int *v395; // [rsp+A50h] [rbp-2C8h]
  __int64 v396; // [rsp+A58h] [rbp-2C0h]
  int *v397; // [rsp+A60h] [rbp-2B8h]
  __int64 v398; // [rsp+A68h] [rbp-2B0h]
  __int64 *v399; // [rsp+A70h] [rbp-2A8h]
  __int64 v400; // [rsp+A78h] [rbp-2A0h]
  int *v401; // [rsp+A80h] [rbp-298h]
  __int64 v402; // [rsp+A88h] [rbp-290h]
  struct _EVENT_DATA_DESCRIPTOR v403; // [rsp+A90h] [rbp-288h] BYREF
  unsigned int *v404; // [rsp+AB0h] [rbp-268h]
  __int64 v405; // [rsp+AB8h] [rbp-260h]
  int *v406; // [rsp+AC0h] [rbp-258h]
  __int64 v407; // [rsp+AC8h] [rbp-250h]
  __int64 *v408; // [rsp+AD0h] [rbp-248h]
  __int64 v409; // [rsp+AD8h] [rbp-240h]
  int *v410; // [rsp+AE0h] [rbp-238h]
  __int64 v411; // [rsp+AE8h] [rbp-230h]
  struct _EVENT_DATA_DESCRIPTOR v412; // [rsp+AF0h] [rbp-228h] BYREF
  unsigned int *v413; // [rsp+B10h] [rbp-208h]
  __int64 v414; // [rsp+B18h] [rbp-200h]
  int *v415; // [rsp+B20h] [rbp-1F8h]
  __int64 v416; // [rsp+B28h] [rbp-1F0h]
  __int64 *v417; // [rsp+B30h] [rbp-1E8h]
  __int64 v418; // [rsp+B38h] [rbp-1E0h]
  int *v419; // [rsp+B40h] [rbp-1D8h]
  __int64 v420; // [rsp+B48h] [rbp-1D0h]
  struct _EVENT_DATA_DESCRIPTOR v421; // [rsp+B50h] [rbp-1C8h] BYREF
  unsigned int *v422; // [rsp+B70h] [rbp-1A8h]
  __int64 v423; // [rsp+B78h] [rbp-1A0h]
  int *v424; // [rsp+B80h] [rbp-198h]
  __int64 v425; // [rsp+B88h] [rbp-190h]
  __int64 *v426; // [rsp+B90h] [rbp-188h]
  __int64 v427; // [rsp+B98h] [rbp-180h]
  int *v428; // [rsp+BA0h] [rbp-178h]
  __int64 v429; // [rsp+BA8h] [rbp-170h]
  struct _EVENT_DATA_DESCRIPTOR v430; // [rsp+BB0h] [rbp-168h] BYREF
  unsigned int *v431; // [rsp+BD0h] [rbp-148h]
  __int64 v432; // [rsp+BD8h] [rbp-140h]
  int *v433; // [rsp+BE0h] [rbp-138h]
  __int64 v434; // [rsp+BE8h] [rbp-130h]
  __int64 *v435; // [rsp+BF0h] [rbp-128h]
  __int64 v436; // [rsp+BF8h] [rbp-120h]
  int *v437; // [rsp+C00h] [rbp-118h]
  __int64 v438; // [rsp+C08h] [rbp-110h]
  struct _EVENT_DATA_DESCRIPTOR v439; // [rsp+C10h] [rbp-108h] BYREF
  unsigned int *v440; // [rsp+C30h] [rbp-E8h]
  __int64 v441; // [rsp+C38h] [rbp-E0h]
  int *v442; // [rsp+C40h] [rbp-D8h]
  __int64 v443; // [rsp+C48h] [rbp-D0h]
  __int64 *v444; // [rsp+C50h] [rbp-C8h]
  __int64 v445; // [rsp+C58h] [rbp-C0h]
  int *v446; // [rsp+C60h] [rbp-B8h]
  __int64 v447; // [rsp+C68h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v448; // [rsp+C70h] [rbp-A8h] BYREF
  unsigned int *v449; // [rsp+C90h] [rbp-88h]
  __int64 v450; // [rsp+C98h] [rbp-80h]
  int *v451; // [rsp+CA0h] [rbp-78h]
  __int64 v452; // [rsp+CA8h] [rbp-70h]
  __int64 *v453; // [rsp+CB0h] [rbp-68h]
  __int64 v454; // [rsp+CB8h] [rbp-60h]
  int *v455; // [rsp+CC0h] [rbp-58h]
  __int64 v456; // [rsp+CC8h] [rbp-50h]

  v81 = a3;
  v13 = a2;
  v90 = a2;
  v181 = a9;
  v182 = a10;
  v184 = a11;
  v183 = a12;
  v15 = 0;
  v204 = 0LL;
  v205 = 0LL;
  v16 = 0;
  LOBYTE(v80) = 0;
  v84 = 0;
  v83 = 1;
  v17 = a4 & 8;
  v86 = v17;
  v18 = (unsigned int *)(a1 + 144);
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v88 = a4;
    v224 = &v88;
    v225 = 4LL;
    v94 = a6;
    v226 = &v94;
    v227 = 4LL;
    v93 = (__int64 *)a1;
    v228 = (__int64 *)&v93;
    v229 = 8LL;
    v95 = *v18;
    v230 = &v95;
    v231 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_140E06B38;
    UserData.Size = *(unsigned __int16 *)off_140E06B38;
    UserData.Reserved = 2;
    v221 = &dword_1400464C4;
    v222 = 84;
    v223 = 1;
    v96 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteEx(qword_140E06B50, &EventDescriptor, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    v13 = v90;
    v17 = v86;
    a3 = v81;
  }
  v19 = a6 & 0x7000;
  if ( v19 != 28672 && (((v19 - 0x2000) & 0xFFFFCFFF) != 0 || v19 == 12288) )
  {
    if ( a3 )
    {
      a3->IoStatus.Status = -1073741597;
      IofCompleteRequest(a3, 1);
    }
    if ( (unsigned int)dword_140E06B30 > 3 )
    {
      v96 = -1073741597;
      v210 = &v96;
      v211 = 4LL;
      v95 = a4;
      v212 = &v95;
      v213 = 4LL;
      v86 = a6;
      v214 = &v86;
      v215 = 4LL;
      v81 = (IRP *)a1;
      v216 = &v81;
      v217 = 8LL;
      v88 = *(_DWORD *)(a1 + 144);
      v218 = &v88;
      v219 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06B30,
        (unsigned __int8 *)&word_14004644E,
        0LL,
        0LL,
        7u,
        &v206);
    }
    return 3221225699LL;
  }
  if ( !a1 )
    return (unsigned int)v15;
  if ( *v18 == 1 || (*(_DWORD *)(a1 + 144) & a6) == 0 )
  {
    if ( (unsigned int)dword_140E06B30 > 5 )
    {
      v173 = 0;
      v233 = &v173;
      v234 = 4LL;
      LODWORD(v93) = a4;
      v235 = &v93;
      v236 = 4LL;
      LODWORD(v90) = a6;
      v237 = &v90;
      v238 = 4LL;
      *(_QWORD *)&EventDescriptor.Id = a1;
      p_EventDescriptor = &EventDescriptor;
      v240 = 8LL;
      LODWORD(v81) = *(_DWORD *)(a1 + 144);
      v241 = &v81;
      v242 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06B30,
        (unsigned __int8 *)&dword_1400463D4,
        0LL,
        0LL,
        7u,
        &v232);
    }
    goto LABEL_12;
  }
  if ( !v17 && (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v13 + 48), *(_QWORD *)(a1 + 8), a4) )
  {
    if ( (unsigned int)dword_140E06B30 > 5 )
    {
      v96 = 0;
      v210 = &v96;
      v211 = 4LL;
      v95 = a4;
      v212 = &v95;
      v213 = 4LL;
      v86 = a6;
      v214 = &v86;
      v215 = 4LL;
      v190 = a1;
      v216 = &v190;
      v217 = 8LL;
      v174 = *(_DWORD *)(a1 + 144);
      v218 = (unsigned int *)&v174;
      v219 = 4LL;
      *(_DWORD *)&v203.Id = 184549376;
      *(_DWORD *)&v203.Level = 517;
      v203.Keyword = 0LL;
      v206.Ptr = (ULONGLONG)off_140E06B38;
      v206.Size = *(unsigned __int16 *)off_140E06B38;
      v206.Reserved = 2;
      v207 = &unk_140046368;
      v208 = 107;
      v209 = 1;
      v88 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteEx(qword_140E06B50, &v203, 0LL, 0, 0LL, 0LL, 7u, &v206);
    }
LABEL_12:
    v85 = 0;
    return 0;
  }
  if ( (*(_DWORD *)(a1 + 144) & 0x40) != 0 && (a4 & 0x10010000) != 0 )
  {
    if ( (unsigned int)dword_140E06B30 > 3 )
    {
      v15 = -1073739511;
      v175 = -1073739511;
      v255 = &v175;
      v256 = 4LL;
      v176 = a4;
      v257 = &v176;
      v258 = 4LL;
      v177 = a6;
      v259 = &v177;
      v260 = 4LL;
      v187 = a1;
      v261 = &v187;
      v262 = 8LL;
      v97 = *(_DWORD *)(a1 + 144);
      v263 = &v97;
      v264 = 4LL;
      v53 = (struct _EVENT_DATA_DESCRIPTOR *)&v254;
      v54 = byte_140046655;
      goto LABEL_165;
    }
    goto LABEL_169;
  }
  v21 = *(_DWORD *)(a1 + 144) & 0x1F0FFDF;
  if ( v21 > 0x105040 )
  {
    switch ( v21 )
    {
      case 0x107040u:
        if ( (unsigned int)dword_140E06B30 > 5 )
        {
          v170 = a4;
          v404 = &v170;
          v405 = 4LL;
          v171 = a6;
          v406 = &v171;
          v407 = 4LL;
          v202 = a1;
          v408 = &v202;
          v409 = 8LL;
          v172 = *(_DWORD *)(a1 + 144);
          v410 = &v172;
          v411 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06B30,
            (unsigned __int8 *)byte_140045E45,
            0LL,
            0LL,
            6u,
            &v403);
        }
        if ( (a6 & 0x1000) == 0 )
        {
LABEL_190:
          v41 = v81;
          if ( (a4 & 0x40000080) != 0x40000080
            || (int)FsRtlpCheckSharingAgainstOplockOwner(v81, *(_QWORD *)(a1 + 8), *a7, *a8) < 0 )
          {
            v39 = 1;
            v16 = 1;
            goto LABEL_79;
          }
          goto LABEL_157;
        }
        break;
      case 0x507040u:
        if ( (unsigned int)dword_140E06B30 > 5 )
        {
          v164 = a4;
          v341 = &v164;
          v342 = 4LL;
          v165 = a6;
          v343 = &v165;
          v344 = 4LL;
          v200 = a1;
          v345 = &v200;
          v346 = 8LL;
          v166 = *(_DWORD *)(a1 + 144);
          v347 = &v166;
          v348 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06B30,
            (unsigned __int8 *)word_140045EB2,
            0LL,
            0LL,
            6u,
            &v340);
        }
        if ( (a6 & 0x7000) == 0x2000 )
        {
          if ( (a4 & 0x40000080) == 0x40000080 )
          {
            v41 = v81;
            if ( (int)FsRtlpCheckSharingAgainstOplockOwner(v81, *(_QWORD *)(a1 + 8), *a7, *a8) >= 0 )
              goto LABEL_157;
          }
          v40 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x107040;
        }
        else
        {
          if ( (a6 & 0x1000) == 0 )
            goto LABEL_76;
          v40 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x807040;
        }
        *(_DWORD *)(a1 + 144) = v40;
        goto LABEL_76;
      case 0x803000u:
        if ( (unsigned int)dword_140E06B30 > 5 )
        {
          v157 = a4;
          v332 = &v157;
          v333 = 4LL;
          v158 = a6;
          v334 = &v158;
          v335 = 4LL;
          v198 = a1;
          v336 = &v198;
          v337 = 8LL;
          v159 = *(_DWORD *)(a1 + 144);
          v338 = &v159;
          v339 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06B30,
            (unsigned __int8 *)word_140046872,
            0LL,
            0LL,
            6u,
            &v331);
        }
        if ( (a6 & 0x8000000) != 0 )
        {
          LOWORD(v88) = 0;
          v15 = FsRtlpBreakRHOplocksForNonCachedIo(a1, v90, a4, &v88);
          v85 = v15;
          if ( v15 < 0 )
            return (unsigned int)v15;
          v82 = BYTE1(v88);
          v16 = v88;
        }
        if ( (a6 & 0x3000) == 0 )
          goto LABEL_156;
        if ( (a4 & 0x80u) == 0 && (a4 & 0x10010000) != 0 )
        {
          if ( (unsigned int)dword_140E06B30 > 3 )
          {
            v15 = -1073739511;
            v160 = -1073739511;
            v321 = &v160;
            v322 = 4LL;
            v161 = a4;
            v323 = &v161;
            v324 = 4LL;
            v162 = a6;
            v325 = &v162;
            v326 = 4LL;
            v184 = (_BYTE *)a1;
            v327 = &v184;
            v328 = 8LL;
            v163 = *(_DWORD *)(a1 + 144);
            v329 = &v163;
            v330 = 4LL;
            v53 = (struct _EVENT_DATA_DESCRIPTOR *)&v320;
            v54 = (char *)word_140045DDA;
            goto LABEL_165;
          }
        }
        else
        {
          for ( i = *(_QWORD **)(a1 + 72); ; i = (_QWORD *)*i )
          {
            v89 = (_QWORD **)i;
            if ( i == (_QWORD *)(a1 + 72) )
              goto LABEL_156;
            if ( (a4 & 0x10) == 0
              && (v86
               || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v90 + 48), i[3], 0LL)
               && ((a6 & 0x2000) != 0 || (i[6] & 0x2000000) != 0))
              && ((a6 & 0x4000000) == 0 || (i[6] & 0x4000000) == 0)
              && ((a4 & 0x40000080) != 0x40000080 || (int)FsRtlpCheckSharingAgainstOplockOwner(v81, i[3], *a7, *a8) < 0) )
            {
              break;
            }
          }
          if ( (a4 & 0x10010000) == 0 )
            goto LABEL_76;
        }
LABEL_169:
        v15 = -1073739511;
        goto LABEL_166;
      case 0x307040u:
        if ( (unsigned int)dword_140E06B30 > 5 )
        {
          v167 = a4;
          v350 = &v167;
          v351 = 4LL;
          v168 = a6;
          v352 = &v168;
          v353 = 4LL;
          v201 = a1;
          v354 = &v201;
          v355 = 8LL;
          v169 = *(_DWORD *)(a1 + 144);
          v356 = &v169;
          v357 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06B30,
            (unsigned __int8 *)byte_140045F20,
            0LL,
            0LL,
            6u,
            &v349);
        }
        if ( (a6 & 0x7000) == 0x4000 )
        {
          v63 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x107040;
          goto LABEL_189;
        }
        if ( (a6 & 0x5000) != 0x5000 )
          goto LABEL_190;
        break;
      case 0x805040u:
        if ( (unsigned int)dword_140E06B30 > 5 )
        {
          v154 = a4;
          v440 = &v154;
          v441 = 4LL;
          v155 = a6;
          v442 = &v155;
          v443 = 4LL;
          v197 = a1;
          v444 = &v197;
          v445 = 8LL;
          v156 = *(_DWORD *)(a1 + 144);
          v446 = &v156;
          v447 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06B30,
            (unsigned __int8 *)&word_140045F8E,
            0LL,
            0LL,
            6u,
            &v439);
        }
LABEL_172:
        v39 = 1;
        if ( (a6 & 0x5000) == 0 )
          goto LABEL_78;
        goto LABEL_77;
      case 0x807040u:
        if ( (unsigned int)dword_140E06B30 > 5 )
        {
          v151 = a4;
          v431 = &v151;
          v432 = 4LL;
          v152 = a6;
          v433 = &v152;
          v434 = 4LL;
          v196 = a1;
          v435 = &v196;
          v436 = 8LL;
          v153 = *(_DWORD *)(a1 + 144);
          v437 = &v153;
          v438 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06B30,
            (unsigned __int8 *)word_140046152,
            0LL,
            0LL,
            6u,
            &v430);
        }
        if ( (a4 & 0x40000080) == 0x40000080
          && (int)FsRtlpCheckSharingAgainstOplockOwner(v81, *(_QWORD *)(a1 + 8), *a7, *a8) >= 0 )
        {
          goto LABEL_156;
        }
LABEL_76:
        v39 = 1;
LABEL_77:
        v16 = v39;
        goto LABEL_78;
      default:
LABEL_153:
        if ( (*(_DWORD *)(a1 + 144) & 0x1000000) == 0 )
        {
          if ( (unsigned int)dword_140E06B30 > 2 )
          {
            v148 = a4;
            v422 = &v148;
            v423 = 4LL;
            v149 = a6;
            v424 = &v149;
            v425 = 4LL;
            v195 = a1;
            v426 = &v195;
            v427 = 8LL;
            v150 = *(_DWORD *)(a1 + 144);
            v428 = &v150;
            v429 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06B30,
              (unsigned __int8 *)word_140046072,
              0LL,
              0LL,
              6u,
              &v421);
          }
          goto LABEL_156;
        }
        if ( (unsigned int)dword_140E06B30 > 5 )
        {
          v145 = a4;
          v413 = &v145;
          v414 = 4LL;
          v146 = a6;
          v415 = &v146;
          v416 = 4LL;
          v194 = a1;
          v417 = &v194;
          v418 = 8LL;
          v147 = *(_DWORD *)(a1 + 144);
          v419 = &v147;
          v420 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06B30,
            (unsigned __int8 *)&byte_1400460DF,
            0LL,
            0LL,
            6u,
            &v412);
        }
        goto LABEL_76;
    }
    v63 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x807040;
LABEL_189:
    *(_DWORD *)(a1 + 144) = v63;
    goto LABEL_190;
  }
  if ( v21 == 1069120 )
  {
    if ( (unsigned int)dword_140E06B30 > 5 )
    {
      v142 = a4;
      v449 = &v142;
      v450 = 4LL;
      v143 = a6;
      v451 = &v143;
      v452 = 4LL;
      v193 = a1;
      v453 = &v193;
      v454 = 8LL;
      v144 = *(_DWORD *)(a1 + 144);
      v455 = &v144;
      v456 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06B30,
        (unsigned __int8 *)byte_140045C9B,
        0LL,
        0LL,
        6u,
        &v448);
    }
    if ( (a6 & 0x1000) != 0 )
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x805040;
    goto LABEL_172;
  }
  v22 = v21 - 4096;
  if ( !v22 )
    goto LABEL_142;
  v23 = v22 - 16;
  if ( !v23 )
    goto LABEL_142;
  v24 = v23 - 8176;
  if ( !v24 )
    goto LABEL_19;
  v29 = v24 - 8256;
  if ( !v29 )
  {
    if ( (unsigned int)dword_140E06B30 > 5 )
    {
      v113 = a4;
      v359 = &v113;
      v360 = 4LL;
      v114 = a6;
      v361 = &v114;
      v362 = 4LL;
      v199 = a1;
      v363 = &v199;
      v364 = 8LL;
      v115 = *(_DWORD *)(a1 + 144);
      v365 = &v115;
      v366 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06B30,
        (unsigned __int8 *)byte_140045D71,
        0LL,
        0LL,
        6u,
        &v358);
    }
    if ( (a6 & 0x5000) == 0x5000 )
    {
      v71 = *(_QWORD *)a1;
      *(_BYTE *)(v71 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v71 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v71 + 69));
      if ( !*(_BYTE *)(v71 + 68) )
      {
        v39 = 1;
        FsRtlpFillOutputBuffer(v71, (*(_DWORD *)(a1 + 144) >> 12) & 7, 0, 1, 0, 0);
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        v44 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x805040;
        goto LABEL_95;
      }
    }
    else
    {
      if ( (a6 & 0x4000) == 0 )
        goto LABEL_156;
      v50 = *(PIRP *)a1;
      v50->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v50->CancelRoutine, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v50->CancelIrql);
      if ( !v50->Cancel )
      {
        v39 = 1;
        FsRtlpFillOutputBuffer((_DWORD)v50, (*(_DWORD *)(a1 + 144) >> 12) & 7, 1, 1, 0, 0);
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        v44 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x105040;
        goto LABEL_95;
      }
    }
LABEL_287:
    FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
    FsRtlpClearOwner(a1, 0LL);
    *(_BYTE *)(a1 + 32) = 0;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
      *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x8000020 | 1;
    while ( 1 )
    {
      v77 = *(void **)(a1 + 88);
      if ( v77 == (void *)(a1 + 88) )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(v77);
    }
    goto LABEL_156;
  }
  v30 = v29 - 0x2000;
  if ( !v30 )
  {
    if ( (unsigned int)dword_140E06B30 > 5 )
    {
      v109 = a4;
      v395 = &v109;
      v396 = 4LL;
      v110 = a6;
      v397 = &v110;
      v398 = 4LL;
      v192 = a1;
      v399 = &v192;
      v400 = 8LL;
      v111 = *(_DWORD *)(a1 + 144);
      v401 = &v111;
      v402 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06B30,
        (unsigned __int8 *)&byte_140045D07,
        0LL,
        0LL,
        6u,
        &v394);
    }
    if ( (a6 & 0x7000) == 0x4000 )
    {
      v64 = *(PIRP *)a1;
      v64->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v64->CancelRoutine, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v64->CancelIrql);
      if ( !v64->Cancel )
      {
        FsRtlpFillOutputBuffer((_DWORD)v64, (*(_DWORD *)(a1 + 144) >> 12) & 7, 3, 1, 0, 0);
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        v39 = v65;
        IofCompleteRequest(*(PIRP *)a1, v65);
        *(_QWORD *)a1 = 0LL;
        v44 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x507040;
        goto LABEL_95;
      }
    }
    else if ( (a6 & 0x7000) == 0x2000 )
    {
      v66 = *(PIRP *)a1;
      if ( (a4 & 0x40000080) == 0x40000080
        && (int)FsRtlpCheckSharingAgainstOplockOwner(v81, *(_QWORD *)(a1 + 8), *a7, *a8) >= 0 )
      {
        goto LABEL_156;
      }
      v66->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v66->CancelRoutine, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v66->CancelIrql);
      if ( !v66->Cancel )
      {
        v67 = 1;
        v112 = 1;
        v68 = 0;
        v69 = 0;
        if ( !*(_BYTE *)v90 )
        {
          v67 = 3;
          v112 = 3;
          v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v90 + 8) + 8LL) + 20LL);
          v69 = *(_WORD *)(v90 + 26);
        }
        FsRtlpFillOutputBuffer((_DWORD)v66, (*(_DWORD *)(a1 + 144) >> 12) & 7, 5, v67, v68, v69);
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        v39 = v70 - 4;
        IofCompleteRequest(*(PIRP *)a1, v70 - 4);
        *(_QWORD *)a1 = 0LL;
        v44 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x307040;
        goto LABEL_95;
      }
    }
    else
    {
      if ( (a6 & 0x5000) != 0x5000 )
        goto LABEL_156;
      v43 = *(PIRP *)a1;
      v43->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v43->CancelRoutine, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v43->CancelIrql);
      if ( !v43->Cancel )
      {
        v39 = 1;
        FsRtlpFillOutputBuffer((_DWORD)v43, (*(_DWORD *)(a1 + 144) >> 12) & 7, 0, 1, 0, 0);
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        v44 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x807040;
LABEL_95:
        *(_DWORD *)(a1 + 144) = v44;
        goto LABEL_77;
      }
    }
    goto LABEL_287;
  }
  v31 = v30 - 16320;
  if ( v31 )
  {
    if ( v31 == 1015808 )
    {
      if ( (unsigned int)dword_140E06B30 > 5 )
      {
        v98 = a4;
        v224 = &v98;
        v225 = 4LL;
        v99 = a6;
        v226 = &v99;
        v227 = 4LL;
        v188 = a1;
        v228 = &v188;
        v229 = 8LL;
        v100 = *(_DWORD *)(a1 + 144);
        v230 = (unsigned int *)&v100;
        v231 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06B30,
          (unsigned __int8 *)&byte_1400469B7,
          0LL,
          0LL,
          6u,
          &UserData);
      }
      if ( (a6 & 0x8000000) != 0 )
      {
        v80 = 0;
        v15 = FsRtlpBreakRHOplocksForNonCachedIo(a1, v90, a4, &v80);
        v85 = v15;
        if ( v15 < 0 )
          return (unsigned int)v15;
        v16 = v80;
        v82 = HIBYTE(v80);
      }
      v32 = 0;
      v87 = 0;
      v33 = a6 & 0x1000;
      if ( (a6 & 0x1000) != 0 )
      {
        v34 = a1 + 72;
        v35 = *(_QWORD **)(a1 + 72);
        while ( 1 )
        {
          v89 = (_QWORD **)v35;
          if ( v35 == (_QWORD *)v34 )
            break;
          if ( v86 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v90 + 48), v35[3], a4) )
          {
            v87 = 1;
            if ( (a6 & 0x4000000) == 0 || (v35[6] & 0x4000000) == 0 )
            {
              v36 = *((_DWORD *)v35 + 12);
              if ( (v36 & 0x2000000) != 0 && (a4 & 0x10) == 0 )
                v16 = 1;
              if ( (a4 & 0x10010000) != 0 )
              {
                if ( (unsigned int)dword_140E06B30 > 3 )
                {
                  v15 = -1073739511;
                  v101 = -1073739511;
                  v266 = &v101;
                  v267 = 4LL;
                  v102 = a4;
                  v268 = &v102;
                  v269 = 4LL;
                  v103 = a6;
                  v270 = &v103;
                  v271 = 4LL;
                  v178 = (_QWORD *)a1;
                  v272 = &v178;
                  v273 = 8LL;
                  v104 = *(_DWORD *)(a1 + 144);
                  v274 = &v104;
                  v275 = 4LL;
                  v53 = (struct _EVENT_DATA_DESCRIPTOR *)&v265;
                  v54 = (char *)&dword_14004694C;
                  goto LABEL_165;
                }
                goto LABEL_169;
              }
              v37 = v36 & 0xFF0FFFFF;
              *((_DWORD *)v35 + 12) = v37;
              *((_DWORD *)v35 + 12) = v37 | 0x800000;
            }
          }
          v35 = (_QWORD *)*v35;
          v34 = a1 + 72;
        }
        FsRtlpComputeShareableOplockState(a1);
        v33 = a6 & 0x1000;
        v32 = v87;
      }
      if ( (a6 & 0x2000) != 0 )
      {
        if ( v16 )
          goto LABEL_206;
        if ( v32 )
        {
          v16 = 1;
          goto LABEL_206;
        }
        if ( !v33 )
        {
          for ( j = *(_QWORD *)(a1 + 72); ; j = *v93 )
          {
            v89 = (_QWORD **)j;
            v93 = (__int64 *)j;
            if ( j == a1 + 72 )
              break;
            v49 = (_QWORD *)(j + 24);
            v178 = v49;
            if ( !v86 )
            {
              if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v90 + 48), *v49, 0LL) )
                continue;
              v49 = v178;
            }
            if ( (a4 & 0x40000080) != 0x40000080 || (int)FsRtlpCheckSharingAgainstOplockOwner(v81, *v49, *a7, *a8) < 0 )
            {
              v16 = 1;
              break;
            }
          }
        }
      }
      if ( v16 )
      {
LABEL_206:
        if ( (a4 & 0x10010000) != 0 )
        {
          if ( (unsigned int)dword_140E06B30 > 3 )
          {
            v15 = -1073739511;
            v105 = -1073739511;
            v277 = &v105;
            v278 = 4LL;
            v106 = a4;
            v279 = &v106;
            v280 = 4LL;
            v107 = a6;
            v281 = &v107;
            v282 = 4LL;
            v191 = a1;
            v283 = &v191;
            v284 = 8LL;
            v108 = *(_DWORD *)(a1 + 144);
            v285 = &v108;
            v286 = 4LL;
            v53 = (struct _EVENT_DATA_DESCRIPTOR *)&v276;
            v54 = byte_1400468E1;
            goto LABEL_165;
          }
          goto LABEL_169;
        }
      }
LABEL_156:
      v41 = v81;
LABEL_157:
      v39 = 1;
      goto LABEL_79;
    }
    goto LABEL_153;
  }
LABEL_142:
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v116 = a4;
    v368 = &v116;
    v369 = 4LL;
    v117 = a6;
    v370 = &v117;
    v371 = 4LL;
    v186 = a1;
    v372 = &v186;
    v373 = 8LL;
    v118 = *(_DWORD *)(a1 + 144);
    v374 = &v118;
    v375 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)byte_1400465ED, 0LL, 0LL, 6u, &v367);
  }
  if ( (a6 & 0x1000) != 0 )
  {
    for ( k = *(_QWORD ***)(a1 + 40); ; k = (_QWORD **)*k )
    {
      v89 = k;
      if ( k == (_QWORD **)(a1 + 40) )
        break;
      v52 = k[2];
      if ( *((_DWORD *)v52 + 6) == 590400
        && (v86 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v90 + 48), v52[6], a4)) )
      {
        if ( (a4 & 0x10010000) != 0 )
        {
          if ( (unsigned int)dword_140E06B30 > 3 )
          {
            v15 = -1073739511;
            v119 = -1073739511;
            v244 = &v119;
            v245 = 4LL;
            v120 = a4;
            v246 = &v120;
            v247 = 4LL;
            v121 = a6;
            v248 = &v121;
            v249 = 4LL;
            v179 = a1;
            v250 = &v179;
            v251 = 8LL;
            v122 = *(_DWORD *)(a1 + 144);
            v252 = &v122;
            v253 = 4LL;
            v53 = (struct _EVENT_DATA_DESCRIPTOR *)&v243;
            v54 = (char *)word_140046582;
            goto LABEL_165;
          }
          goto LABEL_169;
        }
        k = (_QWORD **)k[1];
        v89 = k;
        FsRtlpRemoveAndCompleteReadOnlyIrp(*k, 0, 0, a1);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) != 0xB000 )
  {
    FsRtlpComputeShareableOplockState(a1);
    goto LABEL_156;
  }
LABEL_19:
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v123 = a4;
    v377 = &v123;
    v378 = 4LL;
    v124 = a6;
    v379 = &v124;
    v380 = 4LL;
    v180 = (_QWORD *)a1;
    v381 = &v180;
    v382 = 8LL;
    v125 = *(_DWORD *)(a1 + 144);
    v383 = &v125;
    v384 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)byte_140046519, 0LL, 0LL, 6u, &v376);
  }
  if ( (a6 & 0x8000000) != 0 )
  {
    LOWORD(v94) = 0;
    v15 = FsRtlpBreakRHOplocksForNonCachedIo(a1, v90, a4, &v94);
    v85 = v15;
    v26 = 0LL;
    if ( v15 < 0 )
      return (unsigned int)v15;
    v25 = BYTE1(v94);
    LOBYTE(v80) = BYTE1(v94);
    v46 = v94;
    v82 = HIBYTE(v46);
    v16 = v46;
  }
  else
  {
    v25 = v80;
    v26 = 0LL;
  }
  if ( (a6 & 0x7000) == 0x2000 )
  {
    for ( m = *(_QWORD *)(a1 + 56); ; m = *v93 )
    {
      v89 = (_QWORD **)m;
      v93 = (__int64 *)m;
      if ( m == a1 + 56 )
      {
LABEL_63:
        v25 = v80;
        goto LABEL_64;
      }
      v179 = m;
      v56 = (_QWORD *)(m + 24);
      v180 = v56;
      if ( !v86 )
      {
        v72 = FsRtlpOplockKeysEqual(*(_QWORD *)(v90 + 48), *v56, 0LL);
        v26 = 0LL;
        if ( v72 )
          continue;
        v56 = v180;
      }
      if ( (a4 & 0x40000080) == 0x40000080 )
      {
        v73 = FsRtlpCheckSharingAgainstOplockOwner(v81, *v56, *a7, *a8);
        v26 = 0LL;
        if ( v73 >= 0 )
          continue;
      }
      if ( (a4 & 0x10010000) != 0 )
      {
        if ( (unsigned int)dword_140E06B30 > 3 )
        {
          v15 = -1073739511;
          v130 = -1073739511;
          v288 = &v130;
          v289 = 4LL;
          v131 = a4;
          v290 = &v131;
          v291 = 4LL;
          v132 = a6;
          v292 = &v132;
          v293 = 4LL;
          v181 = a1;
          v294 = &v181;
          v295 = 8LL;
          v133 = *(_DWORD *)(a1 + 144);
          v296 = &v133;
          v297 = 4LL;
          v53 = (struct _EVENT_DATA_DESCRIPTOR *)&v287;
          v54 = &byte_140046807;
          goto LABEL_165;
        }
        goto LABEL_169;
      }
      v57 = v93;
      if ( v93[7] )
      {
        if ( (unsigned int)dword_140E06B30 > 5 )
        {
          v126 = a4;
          v386 = &v126;
          v387 = 4LL;
          v127 = a6;
          v388 = &v127;
          v389 = 4LL;
          v189 = a1;
          v390 = &v189;
          v391 = 8LL;
          v128 = *(_DWORD *)(a1 + 144);
          v392 = &v128;
          v393 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06B30,
            (unsigned __int8 *)&word_140046796,
            0LL,
            0LL,
            6u,
            &v385);
          v57 = v93;
        }
        v16 = 1;
        FsRtlpOplockTryStartBreakAckTimeout(v57 + 9, v57[11], a3, v26);
        v26 = 0LL;
      }
      else
      {
        v58 = (__int64 *)v93[1];
        v93 = v58;
        v89 = (_QWORD **)v58;
        v59 = 1;
        v129 = 1;
        v60 = 0;
        v61 = 0;
        if ( !*(_BYTE *)v90 )
        {
          v59 = 3;
          v129 = 3;
          v60 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v90 + 8) + 8LL) + 20LL);
          v61 = *(_WORD *)(v90 + 26);
        }
        v62 = FsRtlpRemoveAndCompleteRHIrp((_QWORD *)*v58, a1, 0, 0x1000u, v59, v60, v61, 0);
        v26 = 0LL;
        if ( v62 )
        {
          v83 = 0;
          v91 = 0;
          v16 = 1;
          v84 = v86 != 0;
          v92 = v86 != 0;
          FsRtlpOplockTryStartBreakAckTimeout(v179 + 72, *(_QWORD *)(v179 + 88), a3, 0LL);
          v26 = 0LL;
        }
        else
        {
          LOBYTE(v80) = 1;
          v82 = 1;
        }
      }
    }
  }
  if ( (a6 & 0x5000) == 0x5000 )
  {
    for ( n = *(_QWORD **)(a1 + 72); ; n = (_QWORD *)*n )
    {
      v89 = (_QWORD **)n;
      if ( n == (_QWORD *)(a1 + 72) )
      {
        for ( ii = *(_QWORD ***)(a1 + 56); ; ii = (_QWORD **)*ii )
        {
          v89 = ii;
          if ( ii == (_QWORD **)(a1 + 56) )
            break;
          v93 = (__int64 *)ii;
          if ( (v86 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v90 + 48), ii[3], a4))
            && ((a6 & 0x4000000) == 0 || ((_DWORD)ii[6] & 0x4000000) == 0) )
          {
            if ( (a4 & 0x10010000) != 0 )
            {
              if ( (unsigned int)dword_140E06B30 <= 3 )
                goto LABEL_169;
              v15 = -1073739511;
              v138 = -1073739511;
              v310 = &v138;
              v311 = 4LL;
              v139 = a4;
              v312 = &v139;
              v313 = 4LL;
              v140 = a6;
              v314 = &v140;
              v315 = 4LL;
              v183 = a1;
              v316 = &v183;
              v317 = 8LL;
              v141 = *(_DWORD *)(a1 + 144);
              v318 = &v141;
              v319 = 4LL;
              v53 = (struct _EVENT_DATA_DESCRIPTOR *)&v309;
              v54 = (char *)&unk_1400466C0;
              goto LABEL_165;
            }
            if ( ii[7] )
            {
              if ( (a6 & 0x2000) != 0 || ((_DWORD)ii[6] & 0x2000000) != 0 && (a4 & 0x10) == 0 )
              {
                v16 = 1;
                FsRtlpOplockTryStartBreakAckTimeout(ii + 9, ii[11], a3, 0LL);
              }
            }
            else
            {
              ii = (_QWORD **)ii[1];
              v89 = ii;
              if ( FsRtlpRemoveAndCompleteRHIrp(*ii, a1, 0, 0, 1, 0, 0, 0) )
              {
                v83 = 0;
                v91 = 0;
                if ( (a6 & 0x2000) != 0 || (v93[6] & 0x2000000) != 0 && (a4 & 0x10) == 0 )
                {
                  v16 = 1;
                  FsRtlpOplockTryStartBreakAckTimeout(v93 + 9, v93[11], a3, 0LL);
                }
                v84 = v86 != 0;
                v92 = v86 != 0;
              }
              else
              {
                LOBYTE(v80) = 1;
                v82 = 1;
              }
            }
          }
        }
        goto LABEL_63;
      }
      if ( (v86 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v90 + 48), n[3], a4))
        && ((a6 & 0x4000000) == 0 || (n[6] & 0x4000000) == 0) )
      {
        if ( (a4 & 0x10010000) != 0 )
        {
          if ( (unsigned int)dword_140E06B30 <= 3 )
            goto LABEL_169;
          v15 = -1073739511;
          v134 = -1073739511;
          v299 = &v134;
          v300 = 4LL;
          v135 = a4;
          v301 = &v135;
          v302 = 4LL;
          v136 = a6;
          v303 = &v136;
          v304 = 4LL;
          v182 = a1;
          v305 = &v182;
          v306 = 8LL;
          v137 = *(_DWORD *)(a1 + 144);
          v307 = &v137;
          v308 = 4LL;
          v53 = (struct _EVENT_DATA_DESCRIPTOR *)&v298;
          v54 = byte_14004672B;
LABEL_165:
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)v54, 0LL, 0LL, 7u, v53);
LABEL_166:
          v85 = v15;
          return (unsigned int)v15;
        }
        *((_DWORD *)n + 12) &= 0xFF0FFFFF;
        v45 = *((_DWORD *)n + 12) | 0x800000;
        *((_DWORD *)n + 12) = v45;
        if ( (a6 & 0x2000) != 0 || (v45 & 0x2000000) != 0 && (a4 & 0x10) == 0 )
          v16 = 1;
      }
    }
  }
LABEL_64:
  if ( v25 )
    FsRtlpReleaseIrpsWaitingForRH(a1);
  if ( !v16 )
  {
    v38 = *(_QWORD **)(a1 + 72);
    if ( v38 != (_QWORD *)(a1 + 72) && (a4 & 0x10) == 0 )
    {
      if ( v86 )
      {
LABEL_110:
        v39 = 1;
        v16 = 1;
        goto LABEL_69;
      }
      while ( 1 )
      {
        v89 = (_QWORD **)v38;
        if ( v38 == (_QWORD *)(a1 + 72) )
          break;
        if ( ((a6 & 0x4000000) == 0 || (v38[6] & 0x4000000) == 0)
          && !(unsigned __int8)FsRtlpOplockKeysEqual(v38[3], *(_QWORD *)(v90 + 48), 0LL)
          && ((a6 & 0x2000) != 0 || (v38[6] & 0x2000000) != 0) )
        {
          goto LABEL_110;
        }
        v38 = (_QWORD *)*v38;
      }
    }
  }
  v39 = 1;
LABEL_69:
  FsRtlpComputeShareableOplockState(a1);
LABEL_78:
  v41 = v81;
LABEL_79:
  if ( v16 )
  {
    v42 = *(_DWORD *)(a1 + 144);
    if ( ((unsigned __int8)a4 & (unsigned __int8)v39) != 0 )
    {
      if ( (v42 & 0x10000) != 0 )
        *(_DWORD *)(a1 + 144) |= 0x20000u;
      v15 = 264;
      goto LABEL_166;
    }
    if ( (v42 & 0x40) != 0 )
      FsRtlpOplockTryStartBreakAckTimeout(a1 + 160, *(_QWORD *)(a1 + 176), a3, v13);
    if ( v83 )
    {
      v74 = 0LL;
      v75 = 0;
      CurrentThread = (unsigned int)KeGetCurrentThread();
      if ( *(_QWORD *)(a1 + 24) )
      {
        v74 = *(_QWORD *)(a1 + 24);
        v75 = a1 + 144;
      }
      if ( v74 )
      {
        FsRtlpDoBoost(v74, CurrentThread, a1 + 32, v75, a1);
      }
      else
      {
        for ( jj = *(_QWORD **)(a1 + 72); jj != (_QWORD *)(a1 + 72); jj = (_QWORD *)*jj )
          FsRtlpDoBoost(jj[5], CurrentThread, a1 + 32, (_DWORD)jj + 48, a1);
      }
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
    }
    *v184 = 0;
    LOBYTE(RelatedActivityId) = v84;
    v15 = FsRtlpWaitOnIrp(a1, v41, v181, v182, &v204, RelatedActivityId, v183);
    v85 = v15;
  }
  return (unsigned int)v15;
}
