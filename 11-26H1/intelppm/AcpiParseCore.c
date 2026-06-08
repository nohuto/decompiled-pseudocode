/*
 * XREFs of AcpiParseCore @ 0x140040F74
 * Callers:
 *     AcpiEval_PCCP @ 0x140027428 (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x1400279B0 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_CPC @ 0x14002E460 (AcpiEval_CPC.c)
 *     AcpiEval_PSD_TSD @ 0x14002ECE4 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x14002F000 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x14002F3A8 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x14002F6B0 (AcpiEval_XPSS.c)
 *     AcpiParseCpcResourcePriorityRegisterDescriptor @ 0x14002FF74 (AcpiParseCpcResourcePriorityRegisterDescriptor.c)
 *     AcpiParseLpiObject @ 0x140030110 (AcpiParseLpiObject.c)
 *     AcpiEval_CSD @ 0x1400405BC (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1400409C0 (AcpiEval_CST.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_sd @ 0x14000A74C (WPP_RECORDER_SF_sd.c)
 *     WPP_RECORDER_SF_ss @ 0x14000A9E0 (WPP_RECORDER_SF_ss.c)
 *     WPP_RECORDER_SF_sss @ 0x14000AB6C (WPP_RECORDER_SF_sss.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     GetObjectTypeName @ 0x14003227C (GetObjectTypeName.c)
 */

__int64 AcpiParseCore(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        const char *a7,
        char a8,
        ...)
{
  __int64 v8; // r13
  __int64 v9; // r12
  unsigned int v10; // r15d
  unsigned __int16 *v11; // rbx
  unsigned __int8 *v12; // r14
  unsigned int v13; // esi
  unsigned __int64 v14; // rax
  int v15; // edx
  unsigned __int8 *v16; // rbp
  int v17; // edi
  __int64 v18; // r9
  __int64 v19; // rax
  int v21; // r9d
  unsigned __int8 *j; // rcx
  const char *ObjectTypeName; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rdi
  int v27; // r9d
  unsigned __int16 v28; // r9
  int v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 i; // [rsp+70h] [rbp+8h]

  v8 = (unsigned int)a2;
  v9 = 0LL;
  v10 = 0;
  v11 = (unsigned __int16 *)a3;
  v12 = a1;
  v13 = a1[24 * (unsigned int)(a2 - 1)] + 1;
  v14 = a3 + a4;
  for ( i = v14; ; v14 = i )
  {
    if ( (unsigned __int64)v11 >= v14 )
    {
      if ( v10 == v13 )
        return 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431093;
      v28 = 77;
LABEL_49:
      WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v28, v29, a7);
      return (unsigned int)-1072431093;
    }
    if ( v10 >= v13 )
    {
      if ( (a8 & 1) != 0 )
        return 261;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431093;
      v28 = 70;
      goto LABEL_49;
    }
    v15 = *v11;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        goto LABEL_19;
      v16 = &v12[24 * v9];
      if ( *v16 == v10 && *((_WORD *)v16 + 1) == (_WORD)v15 )
        break;
      v9 = (unsigned int)(v9 + 1);
    }
    if ( !v16 )
      break;
    v17 = (*((__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD))v16 + 2))(
            v11,
            a5 + *((unsigned __int16 *)v16 + 2),
            a6 - (unsigned int)*((unsigned __int16 *)v16 + 2));
    if ( v17 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          a2,
          a3,
          v18,
          v29,
          a7,
          *((const char **)v16 + 1));
      return (unsigned int)v17;
    }
    v19 = v11[1];
    ++v10;
    if ( (unsigned __int16)v19 < 4u )
      v19 = 4LL;
    v11 = (unsigned __int16 *)((char *)v11 + v19 + 4);
  }
LABEL_19:
  v21 = 0;
  if ( (_DWORD)v8 )
  {
    for ( j = v12; *j != v10; j += 24 )
    {
      if ( ++v21 >= (unsigned int)v8 )
        return (unsigned int)-1072431096;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      ObjectTypeName = GetObjectTypeName(v15);
      WPP_RECORDER_SF_sss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v24,
        (__int64)ObjectTypeName,
        v25,
        v29,
        a7,
        *(const char **)&v12[24 * v25 + 8],
        (__int64)ObjectTypeName);
    }
    v26 = v8;
    while ( 2 )
    {
      if ( *v12 != v10 )
        goto LABEL_41;
      if ( *((_WORD *)v12 + 1) )
      {
        if ( *((_WORD *)v12 + 1) == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_41;
          v27 = 73;
        }
        else
        {
          if ( *((_WORD *)v12 + 1) != 2 )
          {
            if ( *((_WORD *)v12 + 1) == 3 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v27 = 75;
              break;
            }
LABEL_41:
            v12 += 24;
            if ( !--v26 )
              return (unsigned int)-1072431096;
            continue;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_41;
          v27 = 74;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_41;
        v27 = 72;
      }
      break;
    }
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      1,
      v27,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    goto LABEL_41;
  }
  return (unsigned int)-1072431096;
}
