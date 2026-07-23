/*
 * XREFs of SeAuditBootConfiguration @ 0x14081818C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BcdUtilGetBootOptionBoolean @ 0x140897980 (BcdUtilGetBootOptionBoolean.c)
 *     BcdUtilGetBootOptionInteger @ 0x1408979C8 (BcdUtilGetBootOptionInteger.c)
 *     BcdUtilGetBootOptionString @ 0x140897A10 (BcdUtilGetBootOptionString.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

void __fastcall SeAuditBootConfiguration(__int64 a1)
{
  _QWORD *PrimaryToken; // r8
  _QWORD **ClientToken; // rax
  unsigned __int16 Length; // r11
  int BootOptionBoolean; // eax
  char v6; // cl
  int BootOptionInteger; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r10
  char v11; // cl
  int v12; // eax
  __int64 v13; // r10
  char v14; // cl
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r10
  char v19; // cl
  int v20; // eax
  __int64 v21; // r10
  char v22; // cl
  int v23; // eax
  __int64 v24; // r10
  char v25; // di
  __int16 v26; // r11
  unsigned __int16 v27; // ax
  int v28; // eax
  __int64 v29; // rdx
  int v30; // r10d
  char v31; // al
  int v32; // eax
  char v33; // cl
  __int64 v34; // [rsp+28h] [rbp-E0h] BYREF
  __int64 DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v37; // [rsp+48h] [rbp-C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD Src[12]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-60h]
  int v41; // [rsp+B0h] [rbp-58h]
  int v42; // [rsp+B4h] [rbp-54h]
  const int *v43; // [rsp+C8h] [rbp-40h]
  int v44; // [rsp+D0h] [rbp-38h]
  int v45; // [rsp+D4h] [rbp-34h]
  __int64 v46; // [rsp+D8h] [rbp-30h]
  int v47; // [rsp+F0h] [rbp-18h]
  int v48; // [rsp+F4h] [rbp-14h]
  UNICODE_STRING *p_DestinationString_8; // [rsp+108h] [rbp+0h]
  int v50; // [rsp+110h] [rbp+8h]
  int v51; // [rsp+114h] [rbp+Ch]
  __int64 v52; // [rsp+118h] [rbp+10h]
  int v53; // [rsp+130h] [rbp+28h]
  int v54; // [rsp+134h] [rbp+2Ch]
  __int64 v55; // [rsp+138h] [rbp+30h]
  int v56; // [rsp+150h] [rbp+48h]
  int v57; // [rsp+154h] [rbp+4Ch]
  __int64 v58; // [rsp+158h] [rbp+50h]
  int v59; // [rsp+170h] [rbp+68h]
  int v60; // [rsp+174h] [rbp+6Ch]
  __int64 v61; // [rsp+178h] [rbp+70h]
  int v62; // [rsp+190h] [rbp+88h]
  int v63; // [rsp+194h] [rbp+8Ch]
  __int64 v64; // [rsp+198h] [rbp+90h]
  int v65; // [rsp+1B0h] [rbp+A8h]
  int v66; // [rsp+1B4h] [rbp+ACh]
  __int64 v67; // [rsp+1B8h] [rbp+B0h]
  int v68; // [rsp+1D0h] [rbp+C8h]
  int v69; // [rsp+1D4h] [rbp+CCh]
  __int64 v70; // [rsp+1D8h] [rbp+D0h]
  int v71; // [rsp+1F0h] [rbp+E8h]
  int v72; // [rsp+1F4h] [rbp+ECh]
  __int64 v73; // [rsp+1F8h] [rbp+F0h]
  int v74; // [rsp+210h] [rbp+108h]
  int v75; // [rsp+214h] [rbp+10Ch]
  UNICODE_STRING *v76; // [rsp+228h] [rbp+120h]
  int v77; // [rsp+230h] [rbp+128h]
  int v78; // [rsp+234h] [rbp+12Ch]
  __int64 v79; // [rsp+238h] [rbp+130h]
  int v80; // [rsp+250h] [rbp+148h]
  int v81; // [rsp+254h] [rbp+14Ch]
  __int64 v82; // [rsp+258h] [rbp+150h]

  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  SubjectContext.ClientToken = 0LL;
  memset_0(Src, 0, 0x418uLL);
  LOBYTE(v34) = 0;
  DestinationString = 0LL;
  Src[0] = 6;
  DestinationString_8 = 0LL;
  Src[4] = 524433;
  v37 = 0LL;
  Src[1] = 4826;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  Src[6] = 4;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  v41 = 1;
  if ( SubjectContext.ClientToken )
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
  v42 = 32;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  v44 = 5;
  v45 = 8;
  v40 = *ClientToken[19];
  Src[7] = 4 * *(unsigned __int8 *)(v40 + 1) + 8;
  v43 = &SeSubsystemName;
  v46 = PrimaryToken[3];
  if ( (int)BcdUtilGetBootOptionString(a1, 301989936LL, &DestinationString_8) >= 0
    && (Length = DestinationString_8.Length) != 0 )
  {
    if ( DestinationString_8.Length == DestinationString_8.MaximumLength )
    {
      Length = DestinationString_8.Length - 2;
      DestinationString_8.Length -= 2;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString_8, L"-");
    Length = DestinationString_8.Length;
  }
  v47 = 1;
  v48 = Length + 16;
  p_DestinationString_8 = &DestinationString_8;
  BootOptionBoolean = BcdUtilGetBootOptionBoolean(a1, 369098816LL, &v34);
  v6 = v34;
  v51 = 4;
  if ( BootOptionBoolean < 0 )
    v6 = 0;
  v50 = 21;
  LOBYTE(v34) = v6;
  v52 = 1843LL - (v6 != 0);
  BootOptionInteger = BcdUtilGetBootOptionInteger(a1, 352321607LL, &DestinationString);
  v8 = DestinationString;
  v53 = 21;
  v54 = 4;
  if ( BootOptionInteger < 0 )
    v8 = 0LL;
  DestinationString = v8;
  v55 = 1847LL - (v8 != 1);
  v9 = BcdUtilGetBootOptionBoolean(a1, 637534529LL, &v34);
  v11 = v34;
  v56 = 21;
  v57 = 4;
  if ( v9 < 0 )
    v11 = 0;
  LOBYTE(v34) = v11;
  v58 = v10 - (v11 != 0);
  v12 = BcdUtilGetBootOptionBoolean(a1, 637534368LL, &v34);
  v14 = v34;
  v59 = 21;
  v60 = 4;
  if ( v12 < 0 )
    v14 = 0;
  LOBYTE(v34) = v14;
  v61 = v13 - (v14 != 0);
  v15 = BcdUtilGetBootOptionInteger(a1, 620757314LL, &DestinationString);
  v16 = DestinationString;
  v62 = 21;
  v63 = 4;
  if ( v15 < 0 )
    v16 = 0LL;
  DestinationString = v16;
  v64 = 1849LL - (v16 != 1);
  v17 = BcdUtilGetBootOptionBoolean(a1, 369098825LL, &v34);
  v19 = v34;
  v65 = 21;
  v66 = 4;
  if ( v17 < 0 )
    v19 = 0;
  LOBYTE(v34) = v19;
  v67 = v18 - (v19 != 0);
  v20 = BcdUtilGetBootOptionBoolean(a1, 369098878LL, &v34);
  v22 = v34;
  v68 = 21;
  v69 = 4;
  if ( v20 < 0 )
    v22 = 0;
  LOBYTE(v34) = v22;
  v70 = v21 - (v22 != 0);
  v23 = BcdUtilGetBootOptionBoolean(a1, 369098824LL, &v34);
  v25 = v34;
  v71 = 21;
  v72 = 4;
  if ( v23 < 0 )
    v25 = 0;
  v73 = v24 - (v25 != 0);
  if ( (int)BcdUtilGetBootOptionString(a1, 570425623LL, &v37) >= 0 && (v27 = v37.Length) != 0 )
  {
    if ( v37.Length == v37.MaximumLength )
      DestinationString_8.Length = v26 - 2;
  }
  else
  {
    RtlInitUnicodeString(&v37, L"-");
    v27 = v37.Length;
  }
  v74 = 1;
  v75 = v27 + 16;
  v76 = &v37;
  v28 = BcdUtilGetBootOptionInteger(a1, 620757232LL, &DestinationString);
  v29 = DestinationString;
  v77 = 21;
  v30 = v28;
  v78 = 4;
  if ( v28 < 0 )
    v29 = 0LL;
  v31 = v25;
  v79 = (__PAIR128__(1849LL, 1LL) - (unsigned __int64)(v29 - 1)) >> 64;
  if ( v30 < 0 )
    v31 = 0;
  LOBYTE(v34) = v31;
  v32 = BcdUtilGetBootOptionBoolean(a1, 637534450LL, &v34);
  v33 = v34;
  v80 = 21;
  if ( v32 < 0 )
    v33 = 0;
  v81 = 4;
  Src[2] = 15;
  v82 = 1843LL - (v33 != 0);
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
}
