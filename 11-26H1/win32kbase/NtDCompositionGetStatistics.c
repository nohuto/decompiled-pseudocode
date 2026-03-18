/*
 * XREFs of NtDCompositionGetStatistics @ 0x1400A8750
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetStatistics(void *Src, void *a2, unsigned int a3, __int64 a4, void *a5)
{
  __int64 v6; // r8
  unsigned int v7; // edi
  int v8; // ebx
  unsigned __int64 v9; // r15
  char *v10; // rsi
  __int64 v11; // rdx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  struct DirectComposition::CConnection *v13; // r14
  char v14; // r13
  char *v15; // r12
  unsigned __int64 v16; // r12
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  __int64 v19; // rdx
  char *v20; // r8
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned int i; // r14d
  int v25; // [rsp+20h] [rbp-138h] BYREF
  char *v26; // [rsp+28h] [rbp-130h]
  unsigned int v27; // [rsp+30h] [rbp-128h]
  unsigned int v28; // [rsp+40h] [rbp-118h]
  __int64 v29; // [rsp+48h] [rbp-110h] BYREF
  __int64 v30; // [rsp+50h] [rbp-108h]
  void *v31; // [rsp+58h] [rbp-100h]
  __int64 v32; // [rsp+60h] [rbp-F8h]
  void *v33; // [rsp+68h] [rbp-F0h]
  void *v34; // [rsp+70h] [rbp-E8h]
  __int64 v35; // [rsp+78h] [rbp-E0h]
  __int128 Srca; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+90h] [rbp-C8h]
  _BYTE v38[112]; // [rsp+A0h] [rbp-B8h] BYREF

  v32 = a4;
  v6 = (__int64)a2;
  v31 = a2;
  v34 = a2;
  v7 = a3;
  v27 = a3;
  v35 = a4;
  v33 = a5;
  v8 = 0;
  v9 = 0LL;
  v30 = 0LL;
  v10 = 0LL;
  v26 = 0LL;
  v11 = 0LL;
  Srca = 0LL;
  v37 = 0LL;
  v25 = 0;
  if ( Src && v6 && (a4 || !a3) )
  {
    v29 = 0LL;
    RtlCopyFromUser(&v29, Src, 8uLL);
    v9 = v29;
    v30 = v29;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 >= 0 )
  {
    if ( a3 )
    {
      v7 = 256;
      if ( a3 <= 0x100 )
        v7 = a3;
      if ( v7 <= 4 )
      {
        v10 = v38;
      }
      else
      {
        v10 = (char *)Win32AllocPoolImpl(256LL, 28LL * v7, 0x61644344u);
        if ( !v10 )
          v8 = -1073741801;
      }
      v26 = v10;
    }
    if ( v8 >= 0 )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      v13 = DefaultConnection;
      if ( DefaultConnection )
      {
        v14 = 0;
        v15 = (char *)DefaultConnection + 376;
        ExAcquirePushLockSharedEx((char *)DefaultConnection + 376, 0LL);
        v15[8] = 0;
        v16 = 528 * (v9 % 0x12C);
        if ( *(_QWORD *)((char *)v13 + v16 + 432) == v9 )
        {
          Srca = *(_OWORD *)((char *)v13 + v16 + 440);
          v37 = *(_QWORD *)((char *)v13 + v16 + 456);
          v17 = 0;
          v18 = v7;
          if ( v7 >= *(_DWORD *)((char *)v13 + v16 + 428) )
            v18 = *(_DWORD *)((char *)v13 + v16 + 428);
          if ( v18 )
          {
            v19 = 0LL;
            v20 = v10;
            do
            {
              v21 = *(_QWORD *)((char *)v13 + v16 + 464);
              *(_OWORD *)v20 = *(_OWORD *)(v19 + v21);
              *((_QWORD *)v20 + 2) = *(_QWORD *)(v19 + v21 + 16);
              *((_DWORD *)v20 + 6) = *(_DWORD *)(v19 + v21 + 24);
              ++v17;
              v19 += 120LL;
              v20 += 28;
            }
            while ( v17 < v18 );
          }
          if ( v17 < v7 )
            memset(&v10[28 * v17], 0, 28LL * (v7 - v17));
          v25 = *(_DWORD *)((char *)v13 + v16 + 428);
          v14 = 1;
        }
        DirectComposition::CPushLockCriticalSection::Release((struct DirectComposition::CConnection *)((char *)v13 + 376));
        if ( !v14 )
          v8 = -1073741275;
        DirectComposition::CConnection::Release(v13);
      }
      else
      {
        v8 = -1073741790;
      }
      KeLeaveCriticalRegion();
      if ( v8 >= 0 )
      {
        RtlCopyToUser(v31, &Srca, 0x18uLL);
        v22 = v32;
        if ( v32 )
        {
          for ( i = 0; ; ++i )
          {
            v28 = i;
            if ( i >= v7 )
              break;
            RtlCopyToUser((void *)(v22 + 28LL * i), &v10[28 * i], 0x1CuLL);
          }
        }
        if ( v33 )
          RtlCopyToUser(v33, &v25, 4uLL);
      }
    }
  }
  if ( v10 && v10 != v38 )
    GreDeleteFastMutex(v10, v11, v6, a4);
  return (unsigned int)v8;
}
