/*
 * XREFs of AcpiParseCore @ 0x14002A3D0
 * Callers:
 *     AcpiEval_CPC @ 0x140027B5C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1400282D4 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1400285D8 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x140028CB0 (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x140028EAC (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x1400291B4 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1400294D0 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1400299D8 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x140029CE0 (AcpiEval_XPSS.c)
 *     AcpiParseCpcResourcePriorityRegisterDescriptor @ 0x14002A864 (AcpiParseCpcResourcePriorityRegisterDescriptor.c)
 *     AcpiParseLpiObject @ 0x14002AA00 (AcpiParseLpiObject.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_sd @ 0x140007DD8 (WPP_RECORDER_SF_sd.c)
 *     WPP_RECORDER_SF_ss @ 0x14000806C (WPP_RECORDER_SF_ss.c)
 *     WPP_RECORDER_SF_sss @ 0x1400081F8 (WPP_RECORDER_SF_sss.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     GetObjectTypeName @ 0x14002DB20 (GetObjectTypeName.c)
 */

__int64 __fastcall AcpiParseCore(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        const char *a7,
        char a8)
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
  int v20; // r9d
  unsigned __int8 *j; // rcx
  __int64 ObjectTypeName; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rdi
  int v26; // r9d
  unsigned __int16 v27; // r9
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
      v27 = 77;
LABEL_47:
      WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v27, v29, a7);
      return (unsigned int)-1072431093;
    }
    if ( v10 >= v13 )
    {
      if ( (a8 & 1) != 0 )
        return 261;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431093;
      v27 = 70;
      goto LABEL_47;
    }
    v15 = *v11;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        goto LABEL_16;
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
LABEL_16:
  v20 = 0;
  if ( (_DWORD)v8 )
  {
    for ( j = v12; *j != v10; j += 24 )
    {
      if ( ++v20 >= (unsigned int)v8 )
        return (unsigned int)-1072431096;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      ObjectTypeName = GetObjectTypeName((unsigned __int16)v15);
      WPP_RECORDER_SF_sss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v23,
        ObjectTypeName,
        v24,
        v29,
        a7,
        *(const char **)&v12[24 * v24 + 8],
        ObjectTypeName);
    }
    v25 = v8;
    while ( 2 )
    {
      if ( *v12 != v10 )
        goto LABEL_38;
      if ( *((_WORD *)v12 + 1) )
      {
        if ( *((_WORD *)v12 + 1) == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_38;
          v26 = 73;
        }
        else
        {
          if ( *((_WORD *)v12 + 1) != 2 )
          {
            if ( *((_WORD *)v12 + 1) == 3 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v26 = 75;
              break;
            }
LABEL_38:
            v12 += 24;
            if ( !--v25 )
              return (unsigned int)-1072431096;
            continue;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_38;
          v26 = 74;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_38;
        v26 = 72;
      }
      break;
    }
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      1,
      v26,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    goto LABEL_38;
  }
  return (unsigned int)-1072431096;
}
