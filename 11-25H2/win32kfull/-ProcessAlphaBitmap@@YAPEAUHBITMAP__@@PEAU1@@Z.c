/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x14007C330
 * Callers:
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140131284 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x14007C874 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14008952C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HSURF a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 DIBitmapReal; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // esi
  __int64 v11; // rdx
  HDC v12; // rdx
  unsigned int v13; // r14d
  int DIBits; // edi
  __int64 v15; // rdx
  OBJECT *v16; // rax
  OBJECT *v17; // rbx
  unsigned int v19; // ecx
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // r11
  unsigned int v23; // r8d
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+68h] [rbp-98h]
  __int128 v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int16 v30; // [rsp+A0h] [rbp-60h]
  __int64 v31[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v32; // [rsp+C0h] [rbp-40h]
  _BYTE v33[128]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v34[128]; // [rsp+150h] [rbp+50h] BYREF
  int v35; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v36; // [rsp+1D4h] [rbp+D4h]
  __int64 v37; // [rsp+1DCh] [rbp+DCh]
  __int128 v38; // [rsp+1E4h] [rbp+E4h]
  __int64 v39; // [rsp+1F4h] [rbp+F4h]

  if ( !a1 )
    return 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( !(unsigned int)GreExtGetObjectW(a1) || (_DWORD)v26 != 2097153 )
    return 0LL;
  v36 = *(_QWORD *)((char *)&v25 + 4);
  v39 = 0LL;
  v24 = 0LL;
  v38 = 0LL;
  v35 = 40;
  v37 = 2097153LL;
  v27 = 0LL;
  v30 = 0;
  v28 = 0LL;
  v4 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 56968);
  v29 = 0LL;
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v33, *(HDC *)(v4 + 64));
  DIBitmapReal = GrepCreateDIBitmapReal((struct OPTAPIDCOBJ *)v33, 0, 44, 0LL, 0, 0LL, 0, 0LL, (__int64)&v24);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v33);
  if ( DIBitmapReal )
  {
    v8 = v24;
    v36 = *(_QWORD *)((char *)&v25 + 4);
    v38 = 0LL;
    v39 = 0LL;
    v35 = 40;
    v37 = 2097153LL;
    UserSessionState = W32GetUserSessionState(v7, v6);
    v10 = v35;
    v11 = *(_QWORD *)(UserSessionState + 56968);
    v31[0] = v8;
    v12 = *(HDC *)(v11 + 64);
    v13 = HIDWORD(v36) * (((32 * (int)v36) >> 3) & 0xFFFFFFFC);
    v31[2] = 0LL;
    v32 = 0;
    v31[1] = v13;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v34, v12);
    DIBits = GrepGetDIBits((struct OPTAPIDCOBJ *)v34, a1, (__int64)v31, &v35, 0, v13, v10);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v34);
    if ( DIBits )
    {
      v19 = 0;
      v15 = (unsigned int)(v36 * HIDWORD(v36));
      v20 = v24;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v15 )
        {
          DIBits = 0;
          goto LABEL_6;
        }
        if ( *(_BYTE *)(v24 + 4LL * v19 + 3) )
          break;
        ++v19;
      }
      DIBits = 1;
      if ( (_DWORD)v15 )
      {
        v21 = 0LL;
        v22 = (unsigned int)v15;
        while ( 1 )
        {
          v23 = *(_DWORD *)(v21 + v20);
          v21 += 4LL;
          *(_BYTE *)(v21 + v20 - 2) = HIBYTE(v23) * BYTE2(v23) / 0xFFu;
          *(_BYTE *)(v21 + v24 - 3) = HIBYTE(v23) * BYTE1(v23) / 0xFFu;
          v15 = HIBYTE(v23) * (unsigned __int8)v23 / 0xFFu;
          *(_BYTE *)(v21 + v24 - 4) = v15;
          if ( !--v22 )
            break;
          v20 = v24;
        }
      }
    }
LABEL_6:
    LOBYTE(v15) = 5;
    v16 = (OBJECT *)HmgLock(DIBitmapReal, v15);
    v17 = v16;
    if ( v16 )
    {
      OBJECT::InterlockedDecrementExclusiveLockCount(v16);
      OBJECT::InterlockedDecrementExclusiveLockCount(v17);
    }
    if ( !DIBits )
    {
      GreDeleteObject(DIBitmapReal);
      return 0LL;
    }
  }
  return DIBitmapReal;
}
