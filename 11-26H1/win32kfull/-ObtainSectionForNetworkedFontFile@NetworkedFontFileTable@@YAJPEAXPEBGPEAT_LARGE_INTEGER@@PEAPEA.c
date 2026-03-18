/*
 * XREFs of ?ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x14031CE4C
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1400CF7D0 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x140186E18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BK@@@QEAAXXZ @ 0x140201B7C (-vUnlock@-$SEMOBJ@$0BK@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BK@@@QEAA@PEAUtagSILOGLOBALS@@@Z @ 0x14031CB50 (--0-$SEMOBJ@$0BK@@@QEAA@PEAUtagSILOGLOBALS@@@Z.c)
 *     ?UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x14031D1F8 (-UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x14031D284 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NetworkedFontFileTable::ObtainSectionForNetworkedFontFile(
        NetworkedFontFileTable *this,
        const WCHAR *a2,
        union _LARGE_INTEGER *a3,
        union _LARGE_INTEGER *a4,
        void **a5)
{
  int v9; // edi
  __int64 SiloGlobals; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  char *v14; // rax
  char *v15; // rsi
  struct NETWORKED_FONT_FILE_NODE *v16; // rdx
  void *v17; // rax
  unsigned int v18; // esi
  struct _UNICODE_STRING *v19; // rbx
  char *inserted; // rax
  struct NETWORKED_FONT_FILE_NODE *v21; // rdx
  void *v23; // [rsp+30h] [rbp-61h] BYREF
  PVOID v24; // [rsp+38h] [rbp-59h] BYREF
  void *v25; // [rsp+40h] [rbp-51h] BYREF
  HSEMAPHORE v26; // [rsp+48h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-41h] BYREF
  void **v28; // [rsp+60h] [rbp-31h]
  __int128 Buffer; // [rsp+68h] [rbp-29h] BYREF
  struct _UNICODE_STRING v30; // [rsp+78h] [rbp-19h] BYREF
  __int64 v31; // [rsp+88h] [rbp-9h]

  v28 = a5;
  DestinationString = 0LL;
  v9 = -1073741823;
  SiloGlobals = UserGetSiloGlobals(this, a2);
  RtlInitUnicodeString(&DestinationString, a2);
  SEMOBJ<26>::SEMOBJ<26>(&v26, (HSEMAPHORE *)SiloGlobals);
  Buffer = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  RtlInitUnicodeStringEx(&v30, DestinationString.Buffer);
  v13 = UserGetSiloGlobals(v12, v11);
  v14 = (char *)RtlLookupElementGenericTableAvl(*(PRTL_AVL_TABLE *)(v13 + 8), &Buffer);
  v15 = v14;
  if ( v14 )
  {
    ++*((_DWORD *)v14 + 8);
    SEMOBJ<26>::vUnlock(&v26);
    GreAcquirePushLockShared((struct W32_PUSH_LOCK *)(v15 + 8));
    GreReleasePushLockShared((struct W32_PUSH_LOCK *)(v15 + 8));
    if ( !*(_QWORD *)v15 )
      goto LABEL_6;
    v25 = *(void **)v15;
    Gre::SectionObj::SectionObj(&v23, &v25, 2LL, 0LL);
    v17 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      v9 = 0;
      a4->QuadPart = (LONGLONG)v17;
    }
    Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v23);
    if ( v9 < 0 )
    {
LABEL_6:
      NetworkedFontFileTable::UnreferenceNetworkedFontFileNode(v15, v16);
      goto LABEL_21;
    }
LABEL_20:
    *v28 = v15;
    goto LABEL_21;
  }
  v18 = 2 * DestinationString.Length + 36;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v24, v18);
  v19 = (struct _UNICODE_STRING *)v24;
  if ( !v24 )
  {
LABEL_10:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v24);
    goto LABEL_21;
  }
  *((_DWORD *)v24 + 8) = 1;
  v19[1].Buffer = &v19[2].MaximumLength + 1;
  v19[1].MaximumLength = DestinationString.Length;
  RtlCopyUnicodeString(v19 + 1, &DestinationString);
  inserted = (char *)RtlInsertElementGenericTableAvl(*(PRTL_AVL_TABLE *)(SiloGlobals + 8), v19, v18, 0LL);
  v15 = inserted;
  if ( !inserted )
  {
    v9 = -1073741801;
    goto LABEL_10;
  }
  *((_QWORD *)inserted + 3) = inserted + 36;
  GreInitializePushLock((struct W32_PUSH_LOCK *)(inserted + 8));
  GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 8));
  SEMOBJ<26>::vUnlock(&v26);
  Gre::SectionObj::SectionObj((Gre::SectionObj *)&v23, 0LL, a3, 1, (void **)v15);
  if ( v23 )
  {
    Gre::SectionObj::SectionObj((Gre::SectionObj *)&v25, this, a3, 0, 0LL);
    if ( v25 && (unsigned int)bCopySection(v23, v25, a3->LowPart) )
      v9 = 0;
    Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v25);
  }
  GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 8));
  if ( v9 < 0 )
  {
    a4->QuadPart = 0LL;
    *(_QWORD *)v15 = 0LL;
    NetworkedFontFileTable::UnreferenceNetworkedFontFileNode(v15, v21);
  }
  else
  {
    a4->QuadPart = (LONGLONG)v23;
    v23 = 0LL;
  }
  Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v23);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v24);
  if ( v9 >= 0 )
    goto LABEL_20;
LABEL_21:
  SEMOBJ<26>::vUnlock(&v26);
  return (unsigned int)v9;
}
