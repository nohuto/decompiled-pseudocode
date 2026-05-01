/*
 * XREFs of ??1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ @ 0x1800B7B4C
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800B733C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?Free@ARI@@YAXPEAX@Z @ 0x1800B8034 (-Free@ARI@@YAXPEAX@Z.c)
 */

void __fastcall ARI::ProcessToken::AutoSysAppId::~AutoSysAppId(ARI::ProcessToken::AutoSysAppId *this, void *a2)
{
  void *v3; // rcx

  v3 = *(void **)this;
  if ( v3 )
  {
    ARI::Free(v3, a2);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
}
