/*
 * XREFs of sub_14003202C @ 0x14003202C
 * Callers:
 *     sub_14000EBE0 @ 0x14000EBE0 (sub_14000EBE0.c)
 * Callees:
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

_BOOL8 __fastcall sub_14003202C(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+38h] [rbp-C8h]
  __int64 v9; // [rsp+40h] [rbp-C0h]
  const char *v10; // [rsp+48h] [rbp-B8h]
  int v11; // [rsp+50h] [rbp-B0h]
  __int64 v12; // [rsp+58h] [rbp-A8h]
  const char *v13; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-98h]
  __int64 v15; // [rsp+70h] [rbp-90h]
  const char *v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  const char *v19; // [rsp+90h] [rbp-70h]
  int v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  const char *v22; // [rsp+A8h] [rbp-58h]
  int v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  const char *v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  const char *v28; // [rsp+D8h] [rbp-28h]
  int v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  const char *v31; // [rsp+F0h] [rbp-10h]
  int v32; // [rsp+F8h] [rbp-8h]
  __int64 v33; // [rsp+100h] [rbp+0h]
  const char *v34; // [rsp+108h] [rbp+8h]
  int v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  const char *v37; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+128h] [rbp+28h]
  __int64 v39; // [rsp+130h] [rbp+30h]
  const char *v40; // [rsp+138h] [rbp+38h]
  int v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  const char *v43; // [rsp+150h] [rbp+50h]
  int v44; // [rsp+158h] [rbp+58h]
  __int16 v45; // [rsp+15Ch] [rbp+5Ch]
  __int64 v46; // [rsp+160h] [rbp+60h]
  const char *v47; // [rsp+168h] [rbp+68h]
  int v48; // [rsp+170h] [rbp+70h]
  __int16 v49; // [rsp+174h] [rbp+74h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  const char *v51; // [rsp+180h] [rbp+80h]
  int v52; // [rsp+188h] [rbp+88h]
  __int64 v53; // [rsp+190h] [rbp+90h]
  const char *v54; // [rsp+198h] [rbp+98h]
  int v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  const char *v57; // [rsp+1B0h] [rbp+B0h]
  int v58; // [rsp+1B8h] [rbp+B8h]
  __int64 v59; // [rsp+1C0h] [rbp+C0h]
  const char *v60; // [rsp+1C8h] [rbp+C8h]
  int v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  const char *v63; // [rsp+1E0h] [rbp+E0h]
  int v64; // [rsp+1E8h] [rbp+E8h]
  __int64 v65; // [rsp+1F0h] [rbp+F0h]
  const char *v66; // [rsp+1F8h] [rbp+F8h]
  int v67; // [rsp+200h] [rbp+100h]
  __int64 v68; // [rsp+208h] [rbp+108h]

  sub_140032C80(&v7, 0LL, 480LL);
  v35 = 11;
  v8 = 10;
  v7 = "NamespaceId";
  v9 = a2 + 16;
  v10 = "States";
  v11 = 14;
  v12 = a2 + 20;
  v29 = 14;
  v13 = "IoRecord.SuccessCount";
  v14 = 10;
  v15 = a2 + 24;
  v16 = "IoRecord.OtherErrorCount";
  v18 = a2 + 32;
  v19 = "IoRecord.IoSplitCount";
  v21 = a2 + 36;
  v22 = "IoRecord.PortDriverResetCount";
  v24 = a2 + 40;
  v25 = "IoRecord.TotalResetCount";
  v27 = a2 + 44;
  v28 = "LbaFormat";
  v30 = a2 + 48;
  v31 = "LogicalBlockSize";
  v33 = a2 + 52;
  v34 = "LogicalBlockCount";
  v36 = a2 + 56;
  v37 = "ThinProvisioning";
  v39 = a2 + 65;
  v40 = "End2EndProtection";
  v42 = a2 + 66;
  v43 = "NGUID";
  v46 = a2 + 68;
  v47 = "EUI64";
  v17 = 10;
  v20 = 10;
  v23 = 10;
  v26 = 10;
  v32 = 10;
  v38 = 8;
  v41 = 8;
  v44 = 16;
  v45 = 16;
  v48 = 16;
  v49 = 8;
  v61 = 10;
  v52 = 9;
  v50 = a2 + 84;
  v55 = 9;
  v51 = "OptimalIoBoundary";
  v58 = 9;
  v53 = a2 + 92;
  v60 = "OptimalWriteSize";
  v54 = "SetId";
  v56 = a2 + 94;
  v57 = "EnduranceGroupId";
  v59 = a2 + 96;
  v62 = a2 + 100;
  v65 = a2 + 100;
  v66 = "ReservationCapabilities";
  v68 = a2 + 112;
  v63 = "OptimalWriteSize";
  v64 = 10;
  v67 = 12;
  return (unsigned int)StorPortExtendedFunction(115LL, a1, a2, a3) != 0;
}
