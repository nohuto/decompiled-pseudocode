/*
 * XREFs of ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x140347B8C
 * Callers:
 *     NtGdiDdDDISharedPrimaryLockNotification @ 0x140348D60 (NtGdiDdDDISharedPrimaryLockNotification.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077104 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007715C (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x14023AA54 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1403149E0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x140315990 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall DxLddmSharedPrimaryLockNotification(struct _LUID a1, int a2, const struct _RECTL *a3)
{
  int v4; // edi
  DWORD LowPart; // ebx
  int v6; // r13d
  struct Gre::Base::SESSION_GLOBALS *v7; // r14
  Gre::Base *v8; // rcx
  HDEV i; // rcx
  struct _LUID *v11; // rax
  HDEV v12; // r14
  unsigned __int64 v13; // r12
  LONG top; // ecx
  LONG right; // r9d
  struct tagSIZE v16; // rax
  int v17; // r9d
  struct tagSIZE v18; // rax
  int v19; // r10d
  Gre::Base *v20; // rcx
  __int64 ProcessEntry; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  struct _RECTL *v25; // r14
  LONG v26; // eax
  LONG v27; // eax
  LONG bottom; // eax
  HDEV v29; // rax
  HDEV v30; // r15
  HDEV v31; // [rsp+20h] [rbp-60h] BYREF
  int v32; // [rsp+28h] [rbp-58h]
  __int64 v33; // [rsp+30h] [rbp-50h] BYREF
  struct _LUID v34; // [rsp+38h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h] BYREF
  __int64 v37; // [rsp+50h] [rbp-30h] BYREF
  __int64 v38; // [rsp+58h] [rbp-28h] BYREF
  __int64 v39; // [rsp+60h] [rbp-20h] BYREF
  __int128 v40; // [rsp+68h] [rbp-18h] BYREF

  v32 = a2;
  v4 = a2;
  v34 = a1;
  LowPart = a1.LowPart;
  v6 = 0;
  v35 = Gre::Base::Globals(*(Gre::Base **)&a1);
  v7 = v35;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v33, v35);
  if ( IsDwmActive(v8) )
  {
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v33);
    return 0LL;
  }
  for ( i = 0LL; ; i = v30 )
  {
    v29 = (HDEV)hdevEnumerateDisplayOnly(i);
    v30 = v29;
    if ( !v29 )
      break;
    v31 = v29;
    if ( ((_DWORD)v29[10] & 0x20400) == 0 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v31) )
      {
        if ( LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v31)->LowPart )
        {
          v11 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v31);
          if ( v34.HighPart == v11->HighPart && *(_DWORD *)(*((_QWORD *)v31 + 321) + 248LL) == v4 )
          {
            GrepLockVisRgn(v7);
            GreLockSprite();
            GreAcquireSemaphore<8,PDEVOBJ>((__int64)v31);
            v12 = v31 + 654;
            v13 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
            v40 = 0LL;
            top = a3->top;
            if ( !top && !a3->left && !a3->right && !a3->bottom )
            {
              DWORD2(v40) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v31, &v36).cx;
              a3 = (const struct _RECTL *)&v40;
              HIDWORD(v40) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v31, &v37) + 4LL);
              goto LABEL_20;
            }
            right = a3->right;
            if ( right <= a3->left
              || a3->bottom <= top
              || a3->left < 0
              || right < 0
              || (v16 = PDEVOBJ::sizl((PDEVOBJ *)&v31, &v38), v17 > *(_DWORD *)v16.cx)
              || (v18 = PDEVOBJ::sizl((PDEVOBJ *)&v31, &v39), v19 > *(_DWORD *)(*(_QWORD *)&v18 + 4LL)) )
            {
              v6 = -1073741811;
            }
            else
            {
LABEL_20:
              if ( v6 >= 0 )
              {
                ProcessEntry = DxLddmFindProcessEntry(v12, (unsigned int)v13);
                if ( ProcessEntry )
                  goto LABEL_25;
                v22 = Win32AllocPoolZInit(48LL, 1684305988LL);
                ProcessEntry = v22;
                if ( v22 )
                {
                  *(_DWORD *)(v22 + 16) = v13;
                  v23 = *(_QWORD *)v12;
                  if ( *(HDEV *)(*(_QWORD *)v12 + 8LL) != v12 )
                    __fastfail(3u);
                  *(_QWORD *)ProcessEntry = v23;
                  *(_QWORD *)(ProcessEntry + 8) = v12;
                  *(_QWORD *)(v23 + 8) = ProcessEntry;
                  *(_QWORD *)v12 = ProcessEntry;
LABEL_25:
                  ++*(_DWORD *)(ProcessEntry + 20);
                  ++*((_DWORD *)v31 + 658);
                  v24 = *(_DWORD *)(ProcessEntry + 24);
                  if ( v24 != -1 )
                    *(_DWORD *)(ProcessEntry + 24) = v24 + 1;
                  v25 = (struct _RECTL *)(ProcessEntry + 28);
                  if ( *(_DWORD *)(ProcessEntry + 20) == 1 )
                  {
                    *v25 = *a3;
                    *(_DWORD *)(ProcessEntry + 44) = *((_DWORD *)Gre::Base::Globals(v20) + 1098);
                  }
                  else
                  {
                    if ( a3->left < v25->left )
                      v25->left = a3->left;
                    v26 = a3->top;
                    if ( v26 < *(_DWORD *)(ProcessEntry + 32) )
                      *(_DWORD *)(ProcessEntry + 32) = v26;
                    v27 = a3->right;
                    if ( v27 > *(_DWORD *)(ProcessEntry + 36) )
                      *(_DWORD *)(ProcessEntry + 36) = v27;
                    bottom = a3->bottom;
                    if ( bottom > *(_DWORD *)(ProcessEntry + 40) )
                      *(_DWORD *)(ProcessEntry + 40) = bottom;
                  }
                  bSpTearDownSprites(v31, (struct _RECTL *)(ProcessEntry + 28), 1);
                  PDEVOBJ::vSync(
                    (PDEVOBJ *)&v31,
                    (struct _SURFOBJ *)((*((_QWORD *)v31 + 318) + 24LL) & -(__int64)(*((_QWORD *)v31 + 318) != 0LL)),
                    0LL,
                    6u);
                }
                else
                {
                  v6 = -1073741801;
                }
                v4 = v32;
              }
            }
            GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v31);
            GreUnlockSprite();
            v7 = v35;
            GrepUnlockVisRgn(v35);
            continue;
          }
        }
      }
    }
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v33);
  return (unsigned int)v6;
}
