/*
 * XREFs of ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1400CF7D0
 * Callers:
 *     ?bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1400CFE9C (-bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x1401C676C (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 * Callees:
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x1400CEA00 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ?QueryInSystemFontsDir@FileQueryObj@Gre@@QEBA_NPEA_N@Z @ 0x1400CF14C (-QueryInSystemFontsDir@FileQueryObj@Gre@@QEBA_NPEA_N@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?Reset@FileObj@Gre@@QEAAXPEAX@Z @ 0x1401C68C8 (-Reset@FileObj@Gre@@QEAAXPEAX@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x14031CE4C (-ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEA.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bCreateSectionFromHandle(void *a1, wchar_t *a2, _OWORD *a3, int a4, int a5)
{
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  unsigned int v13; // edi
  bool v14; // al
  PVOID v15; // r14
  PVOID Pointer; // r12
  __int64 v18; // r8
  char v19; // al
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  struct NETWORKED_FONT_FILE_NODE **v24; // [rsp+28h] [rbp-A9h]
  bool v25[8]; // [rsp+30h] [rbp-A1h] BYREF
  unsigned __int16 v26[4]; // [rsp+38h] [rbp-99h] BYREF
  void *v27; // [rsp+40h] [rbp-91h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-89h] BYREF
  __int128 v29; // [rsp+60h] [rbp-71h] BYREF
  __int128 v30; // [rsp+70h] [rbp-61h]
  __int128 v31; // [rsp+80h] [rbp-51h]
  __int128 v32; // [rsp+90h] [rbp-41h]
  __int128 v33; // [rsp+A0h] [rbp-31h]
  void *v34; // [rsp+B0h] [rbp-21h] BYREF
  wchar_t *v35; // [rsp+B8h] [rbp-19h]
  struct _IO_STATUS_BLOCK FileInformation; // [rsp+C0h] [rbp-11h] BYREF
  __int128 v37; // [rsp+D0h] [rbp-1h]
  __int64 v38; // [rsp+E0h] [rbp+Fh]

  v35 = a2;
  *(_QWORD *)v26 = 0LL;
  memset_0(&v29, 0, 0x50uLL);
  v9 = v30;
  *a3 = v29;
  v10 = v31;
  a3[1] = v9;
  v11 = v32;
  a3[2] = v10;
  v12 = v33;
  a3[3] = v11;
  a3[4] = v12;
  v27 = a1;
  if ( !a1 )
    goto LABEL_36;
  *(_QWORD *)&v32 = a1;
  v34 = a1;
  BYTE12(v31) = a5 == 2;
  if ( a4 <= 0 )
  {
    *(_QWORD *)&v37 = 0LL;
    FileInformation = 0LL;
    IoStatusBlock = 0LL;
    if ( ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) < 0 )
      goto LABEL_36;
    *(_QWORD *)v26 = FileInformation.Information;
    if ( HIDWORD(FileInformation.Information) )
      goto LABEL_36;
  }
  else
  {
    *(_DWORD *)v26 = a4;
  }
  v38 = 0LL;
  FileInformation = 0LL;
  v37 = 0LL;
  IoStatusBlock = 0LL;
  if ( ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) < 0 )
    goto LABEL_10;
  v13 = DWORD2(v31) | 1;
  *(_QWORD *)&v29 = v37;
  DWORD2(v31) |= 1u;
  if ( a4 )
  {
    IoStatusBlock.Pointer = *(PVOID *)v26;
    FileInformation = 0LL;
    if ( ZwSetInformationFile(a1, &FileInformation, &IoStatusBlock, 8u, FileEndOfFileInformation) < 0 )
      goto LABEL_10;
  }
  DWORD2(v30) = *(_DWORD *)v26;
  v14 = 0;
  if ( a5 != 2 )
  {
    v25[0] = 0;
    IoStatusBlock = 0LL;
    if ( ZwQueryInformationFile(a1, &IoStatusBlock, v25, 1u, FileIsRemoteDeviceInformation) < 0 )
    {
LABEL_36:
      Gre::FileObj::Reset((Gre::FileObj *)&v27, 0LL);
      return 0LL;
    }
    v14 = v25[0];
  }
  v15 = 0LL;
  FileInformation.Pointer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  if ( v14 )
  {
    if ( NetworkedFontFileTable::ObtainSectionForNetworkedFontFile(
           (NetworkedFontFileTable *)a1,
           a2,
           v26,
           (union _LARGE_INTEGER *)&FileInformation,
           (void **)&IoStatusBlock,
           v24) < 0 )
      goto LABEL_10;
    Pointer = FileInformation.Pointer;
    v15 = IoStatusBlock.Pointer;
  }
  else
  {
    Gre::SectionObj::SectionObj((Gre::SectionObj *)&FileInformation, a1, (union _LARGE_INTEGER *)v26, a4 != 0, 0LL);
    Pointer = FileInformation.Pointer;
    if ( !FileInformation.Pointer )
    {
      Gre::SectionObj::~SectionObj((Gre::SectionObj *)&FileInformation);
LABEL_10:
      ZwClose(a1);
      return 0LL;
    }
    FileInformation.Pointer = 0LL;
    Gre::SectionObj::~SectionObj((Gre::SectionObj *)&FileInformation);
  }
  if ( v15 )
  {
    *((_QWORD *)&v32 + 1) = v15;
    v13 = v13 & 0xFFFFFFFB | (a4 != 0 ? 4 : 0) | 2;
    DWORD2(v31) = v13;
  }
  *(_QWORD *)&v31 = Pointer;
  if ( (v13 & 2) != 0 )
  {
    if ( (v13 & 4) == 0 )
    {
      Gre::FileObj::Reset((Gre::FileObj *)&v27, 0LL);
      a1 = v27;
      *(_QWORD *)&v32 = 0LL;
    }
  }
  else
  {
    a1 = 0LL;
    v27 = 0LL;
    v25[0] = 0;
    if ( Gre::FileQueryObj::QueryInSystemFontsDir((Gre::FileQueryObj *)&v34, v25, v18) )
    {
      v19 = BYTE13(v31);
      if ( v25[0] )
        v19 = 1;
      BYTE13(v31) = v19;
    }
  }
  if ( !BYTE13(v31) && a5 && ScrutinizeFontLoad(0, v35) < 0 )
  {
    vUnreferenceFileviewSection((struct FILEVIEW *)&v29);
    goto LABEL_36;
  }
  v20 = v30;
  *a3 = v29;
  v21 = v31;
  a3[1] = v20;
  v22 = v32;
  a3[2] = v21;
  v23 = v33;
  a3[3] = v22;
  a3[4] = v23;
  if ( a1 )
    ZwClose(a1);
  return 1LL;
}
