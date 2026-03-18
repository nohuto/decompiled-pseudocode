/*
 * XREFs of ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x140201470
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x140201244 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x140249884 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x140249A28 (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1402ACC58 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     UpdateWinIniInt @ 0x140201560 (UpdateWinIniInt.c)
 */

__int64 __fastcall SetWindowMetricInt(struct _UNICODE_STRING *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  struct _UNICODE_STRING *v5; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = (unsigned __int16)a2;
  v5 = a1;
  if ( (unsigned __int16)a2 > 0x8Fu )
  {
    a1 = (struct _UNICODE_STRING *)((unsigned int)(unsigned __int16)a2 - 144);
    if ( (unsigned __int16)a2 != 144 )
    {
      a1 = (struct _UNICODE_STRING *)((unsigned int)(unsigned __int16)a2 - 146);
      if ( (unsigned __int16)a2 != 146 )
      {
        a1 = (struct _UNICODE_STRING *)((unsigned int)(unsigned __int16)a2 - 147);
        if ( (unsigned __int16)a2 != 147 )
        {
          a1 = (struct _UNICODE_STRING *)((unsigned int)(unsigned __int16)a2 - 148);
          if ( (unsigned __int16)a2 != 148 )
          {
            a1 = (struct _UNICODE_STRING *)((unsigned int)(unsigned __int16)a2 - 152);
            if ( (unsigned __int16)a2 != 152 )
            {
              a1 = (struct _UNICODE_STRING *)((unsigned int)(unsigned __int16)a2 - 153);
              if ( (unsigned __int16)a2 != 153 && (unsigned __int16)a2 != 158 )
                return UpdateWinIniInt(v5, 23LL, v3, a3);
            }
          }
        }
      }
    }
LABEL_17:
    v7 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
    a3 = -((int)(1440 * a3 + (*(unsigned __int16 *)(v7 + 6998) >> 1))
         / *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904) + 6998LL));
    return UpdateWinIniInt(v5, 23LL, v3, a3);
  }
  if ( (unsigned __int16)a2 == 143 )
    goto LABEL_17;
  a2 = (unsigned int)(unsigned __int16)a2 - 64;
  if ( v3 == 64 )
    goto LABEL_17;
  a2 = (unsigned int)(a2 - 1);
  if ( !(_DWORD)a2 )
    goto LABEL_17;
  a2 = (unsigned int)(a2 - 71);
  if ( !(_DWORD)a2 )
    goto LABEL_17;
  a2 = (unsigned int)(a2 - 1);
  if ( !(_DWORD)a2 )
    goto LABEL_17;
  a2 = (unsigned int)(a2 - 1);
  if ( !(_DWORD)a2 )
    goto LABEL_17;
  a2 = (unsigned int)(a2 - 2);
  if ( (unsigned int)a2 <= 1 )
    goto LABEL_17;
  return UpdateWinIniInt(v5, 23LL, v3, a3);
}
