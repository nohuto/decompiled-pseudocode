/*
 * XREFs of NtGdiPolyTextOutW @ 0x14021F600
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x140231A74 (-GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiPolyTextOutW(HDC a1, char *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // edi
  unsigned int v7; // r14d
  char *v8; // r15
  __int64 v9; // rcx
  unsigned __int64 *v10; // r13
  unsigned int i; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  size_t v17; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // r9
  unsigned int j; // ebx
  __int64 v22; // r8
  char *v23; // r10
  unsigned int v24; // r11d
  char *v25; // r12
  unsigned int k; // ebx
  __int64 v27; // rax
  char *v28; // r12
  unsigned __int64 v29; // rax
  __int64 SessionState; // rax
  char *v32; // [rsp+40h] [rbp-108h]
  char *v33; // [rsp+50h] [rbp-F8h]
  _BYTE v34[48]; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v35[21]; // [rsp+A0h] [rbp-A8h] BYREF

  v6 = 1;
  v7 = 56 * a3;
  v8 = 0LL;
  if ( a3 > 0xB2924 )
  {
    v6 = 0;
    v10 = (unsigned __int64 *)MmUserProbeAddress;
    goto LABEL_28;
  }
  v9 = 56LL * a3;
  if ( !v9 )
    goto LABEL_8;
  if ( ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = (unsigned __int64 *)MmUserProbeAddress;
  if ( (unsigned __int64)&a2[v9] > MmUserProbeAddress || &a2[v9] < a2 )
  {
    v6 = 1;
    v7 = 56 * a3;
LABEL_8:
    v10 = (unsigned __int64 *)MmUserProbeAddress;
  }
  for ( i = 0; i < a3; ++i )
  {
    v12 = 56LL * i;
    v13 = *(int *)&a2[v12 + 8];
    v14 = v7;
    v7 += 2 * v13;
    if ( v13 > 0x1388000 || v7 < v14 )
      goto LABEL_25;
    if ( *(_QWORD *)&a2[v12 + 48] )
    {
      v15 = 4 * v13;
      if ( (*(_DWORD *)&a2[v12 + 24] & 0x2000) != 0 )
      {
        if ( (unsigned int)(2 * v13) > 0x9C4000 )
          v6 = 0;
        v15 = 8 * v13;
      }
      else if ( v13 > 0x9C4000 )
      {
        v6 = 0;
      }
      v16 = v7;
      v7 += v15;
      if ( !v6 || v7 < v16 )
        goto LABEL_25;
    }
    if ( (_DWORD)v13 && !*(_QWORD *)&a2[56 * i + 16] )
    {
LABEL_25:
      v6 = 0;
      break;
    }
  }
LABEL_28:
  if ( v6 && v7 )
  {
    if ( v7 <= 0x2710000 )
    {
      v8 = (char *)AllocFreeTmpBuffer(v7);
      v10 = (unsigned __int64 *)MmUserProbeAddress;
    }
    if ( v8 )
    {
      v17 = 56LL * a3;
      memmove(v8, a2, v17);
      v20 = &v8[v17];
      v32 = &v8[v17];
      v33 = &v8[v7];
      for ( j = 0; j < a3; ++j )
      {
        v22 = 56LL * j;
        v18 = *(unsigned int *)&v8[v22 + 8];
        if ( (_DWORD)v18 )
        {
          v23 = *(char **)&v8[v22 + 48];
          if ( v23 )
          {
            v18 = (unsigned int)(4 * v18);
            v19 = 56LL * j;
            v24 = *(_DWORD *)&v8[v19 + 8];
            if ( (*(_DWORD *)&v8[v22 + 24] & 0x2000) != 0 )
            {
              if ( v24 > 0x4E2000 )
                v6 = 0;
              v18 = (unsigned int)(2 * v18);
            }
            else if ( v24 > 0x9C4000 )
            {
              v6 = 0;
            }
            v25 = &v20[v18];
            if ( !v6 || v25 < v20 || v25 > v33 )
            {
LABEL_63:
              v6 = 0;
              goto LABEL_64;
            }
            if ( &v23[v18] < v23 || (unsigned __int64)&v23[v18] > *v10 )
              *(_BYTE *)*v10 = 0;
            memmove(v20, v23, (unsigned int)v18);
            v19 = 56LL * j;
            *(_QWORD *)&v8[v19 + 48] = v32;
            v20 = v25;
            v32 = v25;
            v10 = (unsigned __int64 *)MmUserProbeAddress;
          }
        }
      }
      for ( k = 0; k < a3; ++k )
      {
        v18 = 56LL * k;
        LODWORD(v19) = *(_DWORD *)&v8[v18 + 8];
        if ( (_DWORD)v19 )
        {
          v18 = *(_QWORD *)&v8[v18 + 16];
          if ( !v18 )
            goto LABEL_63;
          v27 = (unsigned int)(2 * v19);
          v28 = &v20[v27];
          if ( (unsigned int)v19 > 0x1388000 || v28 < v20 || v28 > v33 )
            goto LABEL_63;
          v29 = v18 + v27;
          if ( v29 < v18 || v29 > *v10 )
            *(_BYTE *)*v10 = 0;
          memmove(v20, (const void *)v18, (unsigned int)(2 * v19));
          v19 = 56LL * k;
          *(_QWORD *)&v8[v19 + 16] = v32;
          v20 = v28;
          v32 = v28;
          v10 = (unsigned __int64 *)MmUserProbeAddress;
        }
      }
LABEL_64:
      if ( v6 )
      {
        SessionState = W32GetSessionState(v19, v18);
        EUDCCountRegion::EUDCCountRegion(
          (EUDCCountRegion *)v34,
          (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v35, a1);
        if ( v35[0] )
        {
          v6 = GrepPolyTextOutW(v35, v8, a3, a4);
        }
        else
        {
          EngSetLastError(6u);
          v6 = 0;
        }
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v35);
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v34);
      }
      FreeTmpBuffer(v8);
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
