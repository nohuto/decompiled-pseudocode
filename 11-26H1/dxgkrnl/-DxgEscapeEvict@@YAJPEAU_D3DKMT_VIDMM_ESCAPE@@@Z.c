/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14019275C
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1400422B8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkpIsDrtEnabled @ 0x14019364C (DxgkpIsDrtEnabled.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1402C2A24 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1402C30E8 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x14043C110 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 */

int __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  int v2; // eax
  int v3; // edi
  struct DXGPROCESS *Process; // rax
  int result; // eax
  struct DXGPROCESS *Current; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-68h] BYREF
  HANDLE hProcess; // [rsp+28h] [rbp-60h]
  __int64 v9; // [rsp+30h] [rbp-58h]
  int v10; // [rsp+38h] [rbp-50h]
  __int16 v11; // [rsp+3Ch] [rbp-4Ch]
  char v12; // [rsp+3Eh] [rbp-4Ah]

  if ( a1->GetVads.GetVad.VadAddress )
  {
    if ( (unsigned __int8)DxgkpIsDrtEnabled() )
    {
      hProcess = a1->Evict.hProcess;
      v9 = 0LL;
      v10 = 2048;
      v11 = 0;
      v12 = 0;
      v2 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v7, 1);
      v3 = v2;
      if ( v2 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v7);
        v3 = DxgEscapeEvictWorker(a1, Process);
      }
      else
      {
        WdLogSingleEntry2(3LL, a1->GetVads.GetVad.VadAddress, v2);
        WdLogGlobalForLineNumber = 389;
      }
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v7);
      return v3;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      result = -1073741823;
      WdLogGlobalForLineNumber = 397;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    return DxgEscapeEvictWorker(a1, Current);
  }
  return result;
}
