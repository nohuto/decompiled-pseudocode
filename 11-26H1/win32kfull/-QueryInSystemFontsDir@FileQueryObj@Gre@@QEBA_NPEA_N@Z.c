/*
 * XREFs of ?QueryInSystemFontsDir@FileQueryObj@Gre@@QEBA_NPEA_N@Z @ 0x1400CF14C
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1400CF7D0 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 * Callees:
 *     ?QueryNameString@FileQueryObj@Gre@@QEBA_NPEAU_OBJECT_NAME_INFORMATION@@K@Z @ 0x1400CF244 (-QueryNameString@FileQueryObj@Gre@@QEBA_NPEAU_OBJECT_NAME_INFORMATION@@K@Z.c)
 */

char __fastcall Gre::FileQueryObj::QueryInSystemFontsDir(Gre::FileQueryObj *this, bool *a2, __int64 a3)
{
  char v3; // di
  int v6; // r14d
  __int64 v7; // rsi
  unsigned int v8; // r8d
  STRING *v9; // rbx
  const STRING *v10; // rcx
  bool v11; // al

  v3 = 0;
  v6 = 1;
  if ( !*(_QWORD *)this )
    return 0;
  v7 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  v9 = (STRING *)_InterlockedExchange64((volatile __int64 *)(v7 + 20104), 0LL);
  if ( v9 || (v6 = 0, (v9 = (STRING *)Win32AllocPoolZInit(400LL, 1986422343LL)) != 0LL) )
  {
    if ( Gre::FileQueryObj::QueryNameString(this, (struct _OBJECT_NAME_INFORMATION *)v9, v8) )
    {
      v10 = *(const STRING **)(v7 + 20096);
      v11 = v10 && RtlPrefixString(v10, v9, 1u);
      *a2 = v11;
      v3 = 1;
    }
    if ( v6 )
      _InterlockedExchange64((volatile __int64 *)(v7 + 20104), (__int64)v9);
    else
      Win32FreePool(v9);
  }
  return v3;
}
