/*
 * XREFs of ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x180679690
 * Callers:
 *     ?IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z @ 0x1806795A8 (-IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z.c)
 * Callees:
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x18018B358 (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z.c)
 *     ?CloseToken@SysAppId@ProcessToken@ARI@@YAXPEAX@Z @ 0x1801AEB54 (-CloseToken@SysAppId@ProcessToken@ARI@@YAXPEAX@Z.c)
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x1806796E4 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 */

__int64 __fastcall ARI::ProcessToken::SysAppId::IsProcessStronglyNamed(
        ARI::ProcessToken::SysAppId *this,
        void *a2,
        void **a3)
{
  DWORD IsStronglyNamed; // ebx
  bool *v5; // r8
  void *v6; // rdx
  void *TokenHandle; // [rsp+40h] [rbp+18h] BYREF

  TokenHandle = 0LL;
  IsStronglyNamed = ARI::ProcessToken::SysAppId::OpenTokenForProcess(this, &TokenHandle, a3);
  if ( !IsStronglyNamed )
  {
    IsStronglyNamed = ARI::ProcessToken::SysAppId::IsStronglyNamed(TokenHandle, a2, v5);
    ARI::ProcessToken::SysAppId::CloseToken((ARI::ProcessToken::SysAppId *)TokenHandle, v6);
  }
  return IsStronglyNamed;
}
