/*
 * XREFs of ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1401E1FEC
 * Callers:
 *     GetDPIMETRICSForDpiUnsafe @ 0x140042E78 (GetDPIMETRICSForDpiUnsafe.c)
 * Callees:
 *     <none>
 */

struct tagDpiKMMetricsCacheNode *__fastcall EnsureKMDpiMetricsCacheNode(__int64 a1, __int64 a2)
{
  int v2; // edi
  unsigned __int16 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int16 *v7; // rbx
  const wchar_t *i; // r8
  unsigned __int16 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx

  v2 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 66256)
    && (v3 = *(unsigned __int16 **)(W32GetUserSessionState(v4, v3) + 66256), *v3 == v2) )
  {
    v7 = *(unsigned __int16 **)(W32GetUserSessionState(v4, v3) + 66256);
LABEL_4:
    if ( v7 )
    {
LABEL_5:
      *(_QWORD *)(W32GetUserSessionState(v6, v5) + 66256) = v7;
      return (struct tagDpiKMMetricsCacheNode *)v7;
    }
  }
  else
  {
    v7 = *(unsigned __int16 **)(W32GetUserSessionState(v4, v3) + 66248);
    if ( v7 )
    {
      while ( *v7 != v2 )
      {
        v7 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
        if ( !v7 )
          goto LABEL_4;
      }
      goto LABEL_5;
    }
  }
  for ( i = L"d"; (__int64)i < (__int64)DesktopScaleFactorCutoffs; i += 2 )
  {
    if ( (96 * *(_DWORD *)i + 50) / 0x64u == v2 )
    {
      v10 = (unsigned __int16 *)Win32AllocPoolZInit(88LL, 1768973397LL);
      v7 = v10;
      if ( !v10 )
        return (struct tagDpiKMMetricsCacheNode *)v7;
      *v10 = v2;
      v10[1] = 1;
      v13 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 66248);
      *((_QWORD *)v7 + 1) = v13;
      *(_QWORD *)(W32GetUserSessionState(v13, v14) + 66248) = v7;
      goto LABEL_5;
    }
  }
  return (struct tagDpiKMMetricsCacheNode *)v7;
}
