/*
 * XREFs of NtDCompositionRegisterThumbnailVisual @ 0x1400B3450
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1400579A8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x1400B2FC0 (UserReferenceDwmApiPort.c)
 *     GreUnlockDwmState @ 0x1400B3070 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1400B3150 (GreLockDwmState.c)
 *     DwmAsyncRegisterSharedThumbnailVisualApiExt @ 0x1400B3760 (DwmAsyncRegisterSharedThumbnailVisualApiExt.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionRegisterThumbnailVisual(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        void *a5,
        void *a6,
        char a7,
        void *Src,
        void *a9)
{
  int v11; // r12d
  int v12; // r15d
  int v13; // edi
  PVOID v14; // rbx
  __int64 v15; // rcx
  PVOID v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rcx
  PVOID v19; // rdi
  int v20; // eax
  int v22; // [rsp+20h] [rbp-E8h]
  PVOID Object; // [rsp+40h] [rbp-C8h] BYREF
  PVOID v24; // [rsp+48h] [rbp-C0h]
  void *v25[2]; // [rsp+50h] [rbp-B8h] BYREF
  void *v26; // [rsp+60h] [rbp-A8h]
  __int64 v27; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-98h]
  void *v29; // [rsp+78h] [rbp-90h]
  __int128 v30; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v31[12]; // [rsp+90h] [rbp-78h] BYREF

  v11 = a2;
  v12 = a1;
  v27 = a1;
  v28 = a2;
  v25[0] = a5;
  v26 = a6;
  v29 = a9;
  v13 = 0;
  v24 = 0LL;
  memset(v31, 0, 45);
  Object = 0LL;
  RtlCopyFromUser(&Object, Src, 8uLL);
  v14 = Object;
  v24 = Object;
  v31[0] = a4;
  v30 = 0LL;
  RtlCopyFromUser(&v30, v25[0], 0x10uLL);
  *(_OWORD *)&v31[1] = v30;
  *(_OWORD *)v25 = 0LL;
  RtlCopyFromUser(v25, v26, 0x10uLL);
  *(_OWORD *)&v31[5] = *(_OWORD *)v25;
  LOBYTE(v31[9]) = a7;
  *(_DWORD *)((char *)&v31[9] + 1) = (a3 >> 2) & 1;
  *(_DWORD *)((char *)&v31[10] + 1) = (a3 >> 3) & 1;
  if ( (v31[0] & 9) != 9
    || (v31[0] & 2) != 0 && (v31[7] < v31[5] || v31[8] < v31[6])
    || v31[3] < v31[1]
    || v31[4] < v31[2]
    || *(_QWORD *)&v31[1]
    || (_WORD)v12 == (_WORD)v11 )
  {
    v13 = -1073741811;
  }
  if ( v13 >= 0 )
  {
    Object = 0LL;
    v13 = DirectComposition::ResourceObject::ResolveHandle(
            a9,
            1u,
            1,
            (struct DirectComposition::ResourceObject **)&Object);
    if ( v13 >= 0 )
    {
      v16 = Object;
      if ( *((_DWORD *)Object + 9) == 156 )
      {
        GreLockDwmState(v15);
        Object = 0LL;
        v13 = OpenDwmHandle(v16, ExCompositionObjectType, 3u, v17, v22, &Object);
        if ( v13 >= 0 )
        {
          v19 = Object;
          v20 = UserReferenceDwmApiPort();
          v13 = DwmAsyncRegisterSharedThumbnailVisualApiExt(
                  v20,
                  v12,
                  v11,
                  a3 & 1,
                  (a3 >> 1) & 1,
                  (__int64)v31,
                  (__int64)v14,
                  (__int64)v19);
        }
        GreUnlockDwmState(v18);
      }
      else
      {
        v13 = -1073741811;
      }
      ObfDereferenceObject(v16);
    }
  }
  return (unsigned int)v13;
}
