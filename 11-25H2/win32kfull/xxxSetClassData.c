/*
 * XREFs of xxxSetClassData @ 0x1400C2294
 * Callers:
 *     xxxSetClassLongPtr @ 0x1400C2140 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1402053D4 (xxxSetClassLong.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1400B33C8 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetCPD @ 0x1400B34F8 (GetCPD.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B3A90 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1400C1280 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1400C2F04 (ClassLock.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1400C2F84 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1400C32D0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x140190294 (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     MapClientToServerPfn @ 0x1401A71D4 (MapClientToServerPfn.c)
 *     MapClientNeuterToClientPfn @ 0x1401BCEA4 (MapClientNeuterToClientPfn.c)
 *     AllocateUnicodeString @ 0x1401EECB0 (AllocateUnicodeString.c)
 *     MapServerToClientPfn @ 0x14026D5A8 (MapServerToClientPfn.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v6; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned int v10; // r14d
  struct tagCLS *v11; // rbx
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rax
  _DWORD *v19; // rax
  char v20; // cl
  unsigned __int64 v21; // r14
  __int64 i; // rdx
  int v23; // ecx
  _DWORD *v24; // rax
  char v25; // cl
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // r8
  _WORD *v36; // rdx
  __int64 v37; // rcx
  __int64 UserSessionState; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // ecx
  __int64 CPD; // rax
  __int64 v43; // rax
  __int64 v44[2]; // [rsp+38h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-60h] BYREF
  __int128 v46; // [rsp+58h] [rbp-50h] BYREF
  __int128 v47; // [rsp+68h] [rbp-40h] BYREF
  __int64 v48; // [rsp+78h] [rbp-30h]

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>((__int64)v44, *((_QWORD *)a1 + 17));
  v9 = 0LL;
  v10 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v46 = 0LL;
  DestinationString = 0LL;
  if ( (_DWORD)v6 == -12 )
    goto LABEL_2;
  if ( (_DWORD)v6 == -24 )
  {
    v15 = *(_QWORD *)v44[0];
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) & 1) != 0 )
    {
      v17 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 32LL), a4, v8);
      v16 = *(_QWORD *)v44[0];
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) &= ~1u;
      if ( a4 )
      {
        v16 = *(_QWORD *)v44[0];
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) |= 2u;
      }
    }
    else
    {
      v17 = MapClientNeuterToClientPfn(v15, 0LL, a4);
      if ( v17 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 32LL)
        && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) >> 1) & 1) )
      {
        v10 = 2 - (a4 != 0);
      }
    }
    if ( v10 )
    {
      CPD = GetCPD(*(_QWORD *)v44[0], v10 | 0x10, v17);
      if ( CPD )
        v17 = CPD;
    }
    if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
    {
      LOBYTE(v16) = 7;
      v43 = HMValidateHandleNoRip(a3, v16);
      if ( v43 )
        a3 = *(_QWORD *)(*(_QWORD *)(v43 + 40) + 16LL);
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 32LL) = a3;
    v18 = MapClientToServerPfn(a3);
    if ( v18 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 32LL) = v18;
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) |= 1u;
    }
    else if ( a4 )
    {
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) |= 2u;
      goto LABEL_13;
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) &= ~2u;
LABEL_13:
    v9 = v17;
    goto LABEL_4;
  }
  if ( (_DWORD)v6 != -29 )
  {
    switch ( (_DWORD)v6 )
    {
      case 0xFFFFFFDE:
        goto LABEL_2;
      case 0xFFFFFFEC:
        v41 = 87;
LABEL_79:
        UserSetLastError(v41);
        goto LABEL_47;
      case 0xFFFFFFEE:
        v36 = (_WORD *)*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 80LL);
        v37 = *(_QWORD *)v44[0];
        v17 = (unsigned int)((_DWORD)v36 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 84LL));
        while ( v10 < 5 )
        {
          UserSessionState = W32GetUserSessionState(v37, v36);
          v37 = *(_QWORD *)v44[0];
          v36 = *(_WORD **)(*(_QWORD *)v44[0] + 8LL);
          if ( *v36 == *(_WORD *)(*(_QWORD *)(UserSessionState + 19872)
                                + 2LL * (((unsigned int)gDefaultServerClasses[12 * v10] >> 3) & 0x1F)
                                + 868) )
          {
            v39 = (unsigned int)dword_14034EDB8[12 * v10];
            v40 = *(_QWORD *)(*(_QWORD *)v44[0] + 8LL);
            if ( a3 >= v39 )
            {
              *(_DWORD *)(v40 + 84) = v39;
              LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 84LL);
            }
            else
            {
              if ( _bittest16((const signed __int16 *)(v40 + 6), 9u) )
                goto LABEL_78;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 84LL) = 0;
            }
            break;
          }
          ++v10;
        }
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 80LL) = a3;
        goto LABEL_13;
      case 0xFFFFFFF2:
LABEL_2:
        if ( (unsigned int)ClassLock(*(_QWORD *)v44[0], &v47) )
        {
          v9 = xxxSetClassCursor(a1, *(struct tagCLS **)v44[0], v6, a3);
          v11 = *(struct tagCLS **)v44[0];
          v13 = PtiCurrent(v44[0], v12);
          *((_QWORD *)v13 + 48) = v47;
          ClassUnlockWorker(v11);
          goto LABEL_4;
        }
LABEL_78:
        v41 = 5;
        goto LABEL_79;
    }
    if ( (_DWORD)v6 != -8 )
    {
      if ( (_DWORD)v6 == -32 )
      {
        v23 = 87;
      }
      else
      {
        if ( (int)v6 + 34 >= 0 )
        {
          _mm_lfence();
          if ( byte_14035B38A[v6] )
          {
            SmartObjStackRefBase<tagCLS>::operator=(v44, *(_QWORD *)(*(_QWORD *)v44[0] + 56LL));
            v19 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + byte_14035B38A[v6]);
            v20 = byte_140358652[v6];
            if ( v20 == 4 )
            {
              v21 = (unsigned int)*v19;
              *v19 = a3;
              if ( (_DWORD)v6 == -26 && (_DWORD)v21 != (_DWORD)a3 )
                DwmUpdateCloseButton(a1, 1);
            }
            else if ( v20 == 8 )
            {
              v21 = *(_QWORD *)v19;
              *(_QWORD *)v19 = a3;
            }
            else
            {
              v21 = *(unsigned __int16 *)v19;
              *(_WORD *)v19 = a3;
            }
            for ( i = *(_QWORD *)(*(_QWORD *)v44[0] + 64LL); ; i = **(_QWORD **)v44[0] )
            {
              SmartObjStackRefBase<tagCLS>::operator=(v44, i);
              if ( !*(_QWORD *)v44[0] )
                break;
              v24 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + byte_14035B38A[v6]);
              v25 = byte_140358652[v6];
              if ( v25 == 4 )
              {
                v21 = (unsigned int)*v24;
                *v24 = a3;
              }
              else if ( v25 == 8 )
              {
                v21 = *(_QWORD *)v24;
                *(_QWORD *)v24 = a3;
              }
              else
              {
                v21 = *(unsigned __int16 *)v24;
                *(_WORD *)v24 = a3;
              }
            }
            v9 = v21;
            goto LABEL_4;
          }
        }
        v23 = 1413;
      }
      UserSetLastError(v23);
LABEL_4:
      SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v44);
      return v9;
    }
    v26 = *(_QWORD *)(*(_QWORD *)v44[0] + 96LL);
    v27 = *(_QWORD *)(a3 + 16);
    v28 = *(_QWORD *)(v27 + 8);
    if ( (v28 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v33 = *(_QWORD *)v44[0];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 40LL) = v28;
      *(_QWORD *)(v33 + 96) = v28;
      goto LABEL_52;
    }
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v27 + 8));
    if ( !DestinationString.Length )
    {
      v29 = *(_QWORD *)v44[0];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 40LL) = 0LL;
      *(_QWORD *)(v29 + 96) = 0LL;
LABEL_52:
      *(_QWORD *)(a3 + 16) = 0LL;
      if ( (v26 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        Win32FreePool((void *)v26);
      v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 16LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 16LL) = *(_QWORD *)a3;
      *(_QWORD *)a3 = v34;
      v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 24LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 24LL) = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v35;
      if ( a4 )
        v9 = *(_QWORD *)a3;
      else
        v9 = v35;
      goto LABEL_4;
    }
    if ( (unsigned int)AllocateUnicodeString(&v46, &DestinationString) )
    {
      v30 = *(_QWORD *)v44[0];
      v31 = *((_QWORD *)&v46 + 1);
      v32 = *((_QWORD *)&v46 + 1);
      if ( (*((_QWORD *)&v46 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
        v32 = -1LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 40LL) = v32;
      *(_QWORD *)(v30 + 96) = v31;
      goto LABEL_52;
    }
    *(_QWORD *)(a3 + 16) = 0LL;
  }
LABEL_47:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v44);
  return 0LL;
}
