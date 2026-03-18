/*
 * XREFs of VidSchTerminateProcessX @ 0x1402E705C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

struct DXGGLOBAL *__fastcall VidSchTerminateProcessX(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  struct DXGGLOBAL *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi

  v2 = 280LL;
  v3 = 2LL;
  do
  {
    result = DXGGLOBAL::GetGlobal();
    if ( *(_QWORD *)((char *)result + v2) )
    {
      result = DXGGLOBAL::GetGlobal();
      v5 = *(_QWORD *)(a1 + 64);
      v6 = *(_QWORD *)((char *)result + v2);
      if ( v5 )
      {
        result = (struct DXGGLOBAL *)(unsigned int)(*(_DWORD *)v6 - 1);
        if ( *(_QWORD *)(v5 + 8LL * (_QWORD)result + 16) )
        {
          (*(void (**)(void))(*(_QWORD *)(v6 + 8) + 96LL))();
          result = *(struct DXGGLOBAL **)(a1 + 64);
          *((_QWORD *)result + (unsigned int)(*(_DWORD *)v6 - 1) + 2) = 0LL;
        }
      }
    }
    v2 += 8LL;
    --v3;
  }
  while ( v3 );
  return result;
}
