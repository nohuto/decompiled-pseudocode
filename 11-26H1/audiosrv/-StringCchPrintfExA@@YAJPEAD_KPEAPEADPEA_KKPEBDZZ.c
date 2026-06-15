/*
 * XREFs of ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90
 * Callers:
 *     ?ConnectToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001FDF0 (-ConnectToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?StartStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x180020240 (-StartStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?StopStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x180020590 (-StopStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?StopStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180020794 (-StopStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ?StartStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180020C84 (-StartStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ?DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180021450 (-DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ??1CAPOWrapperClient@@UEAA@XZ @ 0x1800217BC (--1CAPOWrapperClient@@UEAA@XZ.c)
 *     ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800219E0 (-InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__M.c)
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180021D80 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180023D60 (-InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180043770 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ??1CProcessSubmixProxy@@MEAA@XZ @ 0x1800441BC (--1CProcessSubmixProxy@@MEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 * Callees:
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _vsnprintf @ 0x1800B33C0 (_vsnprintf.c)
 *     StringExHandleOtherFlagsA @ 0x180109BA8 (StringExHandleOtherFlagsA.c)
 */

__int64 StringCchPrintfExA(
        STRSAFE_LPSTR pszDest,
        size_t cbDest,
        char **a3,
        unsigned __int64 *a4,
        DWORD dwFlags,
        char *Format,
        ...)
{
  unsigned int v6; // ebp
  int v10; // edx
  const char *v11; // r8
  STRSAFE_LPSTR v12; // rsi
  size_t v13; // rdi
  unsigned __int64 v14; // r15
  int v15; // eax
  __int64 result; // rax
  STRSAFE_LPSTR ppszDestEnd; // [rsp+30h] [rbp-58h] BYREF
  size_t pcchRemaining[2]; // [rsp+38h] [rbp-50h] BYREF
  va_list ArgList; // [rsp+C0h] [rbp+38h] BYREF

  va_start(ArgList, Format);
  v6 = 0;
  v10 = 0;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( cbDest - 1 <= 0x7FFFFFFE )
      goto LABEL_3;
    goto LABEL_28;
  }
  if ( !pszDest && cbDest || cbDest > 0x7FFFFFFF )
LABEL_28:
    v10 = -2147024809;
LABEL_3:
  if ( v10 >= 0 )
  {
    v11 = Format;
    v12 = pszDest;
    v13 = cbDest;
    ppszDestEnd = pszDest;
    pcchRemaining[0] = cbDest;
    if ( (dwFlags & 0x100) != 0 && !Format )
      v11 = MultiByteStr;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v6 = -2147024809;
      if ( cbDest )
        *pszDest = 0;
    }
    else
    {
      if ( cbDest )
      {
        v14 = cbDest - 1;
        pcchRemaining[0] = 0LL;
        v15 = vsnprintf(pszDest, cbDest - 1, v11, ArgList);
        if ( v15 < 0 || v15 > v14 )
        {
          v12 = &pszDest[v14];
          pszDest[v14] = 0;
          v13 = 1LL;
          ppszDestEnd = &pszDest[v14];
          pcchRemaining[0] = 1LL;
          v6 = -2147024774;
          goto LABEL_10;
        }
        if ( v15 == v14 )
        {
          pszDest[v14] = 0;
          v12 = &pszDest[v14];
          v13 = 1LL;
        }
        else
        {
          v12 = &pszDest[v15];
          v13 = cbDest - v15;
        }
        if ( (dwFlags & 0x200) != 0 && v13 > 1 )
          memset_0(v12 + 1, (unsigned __int8)dwFlags, v13 - 1);
LABEL_18:
        if ( a3 )
          *a3 = v12;
        result = v6;
        if ( a4 )
          *a4 = v13;
        return result;
      }
      if ( !*v11 )
        goto LABEL_18;
      v6 = -2147024774;
      if ( !pszDest )
        v6 = -2147024809;
    }
LABEL_10:
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      StringExHandleOtherFlagsA(pszDest, cbDest, (size_t)v11, &ppszDestEnd, pcchRemaining, dwFlags);
      v12 = ppszDestEnd;
      v13 = pcchRemaining[0];
    }
    if ( v6 != -2147024774 )
      return v6;
    goto LABEL_18;
  }
  result = (unsigned int)v10;
  if ( cbDest )
    *pszDest = 0;
  return result;
}
