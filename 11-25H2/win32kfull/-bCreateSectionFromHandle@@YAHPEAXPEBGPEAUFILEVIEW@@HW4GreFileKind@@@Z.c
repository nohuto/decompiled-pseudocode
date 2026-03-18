/*
 * XREFs of ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305B64
 * Callers:
 *     ?bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305AB4 (-bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140305F10 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14010C4A4 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x14010DE2C (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ?QueryInSystemFontsDir@FileQueryObj@Gre@@QEBA_NPEA_N@Z @ 0x1401B72D4 (-QueryInSystemFontsDir@FileQueryObj@Gre@@QEBA_NPEA_N@Z.c)
 *     ?QueryLastWriteTime@FileQueryObj@Gre@@QEBA_NPEAT_LARGE_INTEGER@@@Z @ 0x1401CB75C (-QueryLastWriteTime@FileQueryObj@Gre@@QEBA_NPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CreateSection@FileObj@Gre@@QEAA_NPEAT_LARGE_INTEGER@@_NPEAPEAX@Z @ 0x1401D1910 (-CreateSection@FileObj@Gre@@QEAA_NPEAT_LARGE_INTEGER@@_NPEAPEAX@Z.c)
 *     ?Reset@FileObj@Gre@@QEAAXPEAX@Z @ 0x1401D26F8 (-Reset@FileObj@Gre@@QEAAXPEAX@Z.c)
 *     ?QueryEndOfFile@FileQueryObj@Gre@@QEBA_NPEAT_LARGE_INTEGER@@@Z @ 0x1401D2734 (-QueryEndOfFile@FileQueryObj@Gre@@QEBA_NPEAT_LARGE_INTEGER@@@Z.c)
 *     ?QueryDeviceRemoteBit@FileQueryObj@Gre@@QEBA_NPEA_N@Z @ 0x1401E7478 (-QueryDeviceRemoteBit@FileQueryObj@Gre@@QEBA_NPEA_N@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x140305498 (-ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEA.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bCreateSectionFromHandle(void *a1, const WCHAR *a2, _OWORD *a3, signed int a4, int a5)
{
  PVOID Pointer; // rdi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  char v14; // al
  unsigned int v16; // ebx
  char LowPart; // al
  struct NETWORKED_FONT_FILE_NODE *v18; // rdx
  char v19; // al
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  void *v24; // [rsp+30h] [rbp-41h] BYREF
  void *v25; // [rsp+38h] [rbp-39h] BYREF
  union _LARGE_INTEGER v26[2]; // [rsp+40h] [rbp-31h] BYREF
  __int128 v27; // [rsp+50h] [rbp-21h]
  __int128 v28; // [rsp+60h] [rbp-11h]
  __int128 v29; // [rsp+70h] [rbp-1h]
  __int128 v30; // [rsp+80h] [rbp+Fh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp+1Fh] BYREF
  union _LARGE_INTEGER FileInformation; // [rsp+D0h] [rbp+5Fh] BYREF
  union _LARGE_INTEGER v33; // [rsp+E0h] [rbp+6Fh] BYREF

  Pointer = 0LL;
  v33.QuadPart = 0LL;
  memset_0(v26, 0, 0x50uLL);
  v10 = v27;
  *a3 = *(_OWORD *)&v26[0].LowPart;
  v11 = v28;
  a3[1] = v10;
  v12 = v29;
  a3[2] = v11;
  v13 = v30;
  a3[3] = v12;
  a3[4] = v13;
  v24 = a1;
  if ( !a1 )
    goto LABEL_7;
  v14 = BYTE12(v28);
  if ( a5 == 2 )
    v14 = 1;
  *(_QWORD *)&v29 = a1;
  BYTE12(v28) = v14;
  v25 = a1;
  if ( a4 > 0 )
  {
    v33.LowPart = a4;
  }
  else if ( !Gre::FileQueryObj::QueryEndOfFile(&v25, &v33) || v33.HighPart )
  {
    goto LABEL_7;
  }
  if ( !Gre::FileQueryObj::QueryLastWriteTime(&v25, v26) )
    goto LABEL_7;
  v16 = DWORD2(v28) | 1;
  DWORD2(v28) |= 1u;
  if ( a4 )
  {
    FileInformation = v33;
    IoStatusBlock = 0LL;
    if ( ZwSetInformationFile(a1, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation) < 0 )
      goto LABEL_7;
  }
  DWORD2(v27) = v33.LowPart;
  LowPart = 0;
  if ( !BYTE12(v28) )
  {
    LOBYTE(FileInformation.LowPart) = 0;
    if ( !Gre::FileQueryObj::QueryDeviceRemoteBit(&v25, (bool *)&FileInformation) )
      goto LABEL_7;
    LowPart = FileInformation.LowPart;
  }
  FileInformation.QuadPart = 0LL;
  IoStatusBlock.Pointer = 0LL;
  if ( LowPart )
  {
    if ( (int)NetworkedFontFileTable::ObtainSectionForNetworkedFontFile(
                (NetworkedFontFileTable *)a1,
                a2,
                &v33,
                &FileInformation,
                (void **)&IoStatusBlock) >= 0 )
    {
      Pointer = IoStatusBlock.Pointer;
      goto LABEL_19;
    }
LABEL_7:
    Gre::FileObj::Reset(&v24, 0LL);
    return 0LL;
  }
  if ( !Gre::FileObj::CreateSection(&v24, &v33, a4 != 0, (void **)&FileInformation) )
    goto LABEL_7;
LABEL_19:
  if ( Pointer )
  {
    *((_QWORD *)&v29 + 1) = Pointer;
    v16 = v16 & 0xFFFFFFFB | (a4 != 0 ? 4 : 0) | 2;
    DWORD2(v28) = v16;
  }
  *(union _LARGE_INTEGER *)&v28 = FileInformation;
  if ( (v16 & 2) != 0 )
  {
    if ( (v16 & 4) == 0 )
    {
      Gre::FileObj::Reset(&v24, 0LL);
      *(_QWORD *)&v29 = 0LL;
    }
  }
  else
  {
    v24 = 0LL;
    LOBYTE(FileInformation.LowPart) = 0;
    if ( (_QWORD)v29 && Gre::FileQueryObj::QueryInSystemFontsDir((Gre::FileQueryObj *)&v25, (bool *)&FileInformation) )
    {
      v19 = BYTE13(v28);
      if ( LOBYTE(FileInformation.LowPart) )
        v19 = 1;
      BYTE13(v28) = v19;
    }
  }
  if ( a5 && !BYTE13(v28) && ScrutinizeFontLoad(0, a2) < 0 )
  {
    vUnreferenceFileviewSection((struct FILEVIEW *)v26, v18);
    goto LABEL_7;
  }
  v20 = v27;
  *a3 = *(_OWORD *)&v26[0].LowPart;
  v21 = v28;
  a3[1] = v20;
  v22 = v29;
  a3[2] = v21;
  v23 = v30;
  a3[3] = v22;
  a3[4] = v23;
  Gre::FileObj::Reset(&v24, 0LL);
  return 1LL;
}
