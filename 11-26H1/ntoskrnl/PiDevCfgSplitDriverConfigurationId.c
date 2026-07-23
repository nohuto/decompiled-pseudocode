/*
 * XREFs of PiDevCfgSplitDriverConfigurationId @ 0x1407AEB68
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14044A410 (RtlTimeFieldsToTime.c)
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     swscanf_s @ 0x14053EE70 (swscanf_s.c)
 *     Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline @ 0x1405DD9A8 (Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PiDevCfgParseVersionString @ 0x1407ACFE8 (PiDevCfgParseVersionString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgSplitDriverConfigurationId(
        const wchar_t *Src,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PLARGE_INTEGER Time,
        _QWORD *a6)
{
  unsigned int v7; // ebx
  wchar_t *v9; // rax
  wchar_t *v10; // rbp
  __int64 v11; // rax
  size_t v12; // rsi
  void *Pool2; // rax
  wchar_t *v14; // rax
  wchar_t *v15; // rsi
  wchar_t *v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  _WORD *v19; // r14
  wchar_t *v20; // rsi
  unsigned __int64 v21; // rbp
  int v22; // eax
  const wchar_t *v23; // rcx
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-58h] BYREF
  wchar_t Srca[12]; // [rsp+40h] [rbp-48h] BYREF

  v7 = 0;
  TimeFields = 0LL;
  v9 = wcschr(Src, 0x3Au);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741823;
  if ( a2 )
  {
    v11 = 2 * (unsigned int)(v9 - Src);
    v12 = (unsigned int)v11;
    if ( (unsigned __int64)(v11 + 2) > 0xFFFE )
      return (unsigned int)-1073741562;
    *(_WORD *)a2 = v11;
    *(_WORD *)(a2 + 2) = v11 + 2;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a2 + 8) = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    memmove(Pool2, Src, v12);
    *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * (v12 >> 1)) = 0;
  }
  v14 = wcschr(v10 + 1, 0x2Cu);
  if ( !v14 )
    return (unsigned int)-1073741823;
  v15 = v14 + 1;
  v16 = wcschr(v14 + 1, 0x2Cu);
  v17 = -1LL;
  if ( !v16 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v15[v18] );
    v16 = &v15[v18];
  }
  if ( *v16 )
  {
    if ( Time || a6 )
    {
      v19 = v16 + 1;
      v20 = wcschr(v16 + 1, 0x2Cu);
      if ( !v20 )
      {
        do
          ++v17;
        while ( v19[v17] );
        v20 = &v19[v17];
      }
      if ( Time )
      {
        v21 = (unsigned int)(v20 - v19);
        if ( v21 * 2 + 2 > 0x16 )
          return (unsigned int)-1073741823;
        memmove(Srca, v19, (unsigned int)(v21 * 2));
        if ( v21 >= 11 )
          _report_rangecheckfailure();
        Srca[v21] = 0;
        if ( swscanf_s(Srca, L"%hu/%hu/%hu", &TimeFields.Month, &TimeFields.Day, &TimeFields) != 3
          || !RtlTimeFieldsToTime(&TimeFields, Time) )
        {
          return (unsigned int)-1073741823;
        }
      }
      if ( !a6 )
        return v7;
      if ( *v20 )
      {
        v22 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
        v23 = v20 + 1;
        if ( v22 )
        {
          if ( PiDevCfgParseVersionString(v23, 4, a6) )
            return v7;
        }
        else if ( swscanf_s(
                    v23,
                    L"%hu.%hu.%hu.%hu",
                    (char *)a6 + 6,
                    (char *)a6 + 4,
                    (char *)a6 + 2,
                    a6,
                    *(_QWORD *)&TimeFields.Year,
                    *(_QWORD *)&TimeFields.Minute) == 4 )
        {
          return v7;
        }
        return (unsigned int)-1073741823;
      }
LABEL_35:
      *a6 = 0LL;
    }
  }
  else
  {
    if ( Time )
      Time->QuadPart = 0LL;
    if ( a6 )
      goto LABEL_35;
  }
  return v7;
}
