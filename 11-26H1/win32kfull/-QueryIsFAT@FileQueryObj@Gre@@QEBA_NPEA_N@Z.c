/*
 * XREFs of ?QueryIsFAT@FileQueryObj@Gre@@QEBA_NPEA_N@Z @ 0x14034DC78
 * Callers:
 *     ?bShouldMap@@YAHPEAUFILEVIEW@@0@Z @ 0x1400CF714 (-bShouldMap@@YAHPEAUFILEVIEW@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::FileQueryObj::QueryIsFAT(HANDLE *this, bool *a2)
{
  wchar_t *v4; // rax
  const wchar_t *v5; // rbx
  NTSTATUS v6; // edi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  v4 = (wchar_t *)AllocFreeTmpBuffer(536LL);
  v5 = v4;
  if ( v4 )
  {
    v6 = ZwQueryVolumeInformationFile(*this, &IoStatusBlock, v4, 0x218u, FileFsAttributeInformation);
    if ( v6 >= 0 )
      *a2 = _wcsnicmp(v5 + 6, L"FAT", 3uLL) == 0;
    FreeTmpBuffer(v5);
    LOBYTE(v4) = v6 >= 0;
  }
  return (char)v4;
}
