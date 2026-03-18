/*
 * XREFs of CreatePTPEngine @ 0x14019EB10
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1401573A4 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0TPTHRESHOLDS@@QEAA@XZ @ 0x14015E2F4 (--0TPTHRESHOLDS@@QEAA@XZ.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CreatePTPEngine(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = Win32AllocPoolZInitImpl(256LL, 0xD48uLL, 0x70747355u);
  v3 = (_QWORD *)v2;
  if ( v2 )
  {
    memset((void *)(v2 + 16), 0, 0xD38uLL);
    v3[1] = 0LL;
    *v3 = &CPTPEngine::`vftable';
    TPTHRESHOLDS::TPTHRESHOLDS((TPTHRESHOLDS *)(v3 + 386));
    result = 0LL;
    *a1 = v3;
  }
  else
  {
    *a1 = 0LL;
    return 3221225495LL;
  }
  return result;
}
