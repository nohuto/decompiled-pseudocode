/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1400FD2C0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1401B55DC (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(void *Src, void *a2, void *a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  size_t v8; // r13
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  struct _ERESOURCE *v17; // rbx
  __int64 DCompSessionState; // rdi
  struct _ERESOURCE *v19; // r12
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v28[3]; // [rsp+34h] [rbp-74h] BYREF
  void *v29; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-60h] BYREF
  __int64 v31; // [rsp+50h] [rbp-58h] BYREF
  size_t v32; // [rsp+58h] [rbp-50h]
  void *Srca; // [rsp+60h] [rbp-48h] BYREF
  size_t Size; // [rsp+B0h] [rbp+8h] BYREF
  void *v35; // [rsp+B8h] [rbp+10h]
  void *v36; // [rsp+C0h] [rbp+18h]
  int v37; // [rsp+C8h] [rbp+20h] BYREF

  v36 = a3;
  v35 = a2;
  v37 = 0;
  v27 = 0;
  v32 = 0LL;
  if ( Src )
  {
    Size = 0LL;
    RtlCopyFromUser(&Size, Src, 8uLL);
    v8 = Size;
    v32 = Size;
    v9 = -1073741811;
    if ( Size )
      v9 = 0;
    v28[1] = v9;
    if ( v9 >= 0 )
    {
      v10 = *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 70544);
      if ( PsGetCurrentProcess(v11) == v10 )
      {
        KeEnterCriticalRegion();
        v12 = 0LL;
        v13 = 0LL;
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v14);
        if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
          v13 = CurrentProcessWin32Process[32];
        if ( v13 )
        {
          v17 = *(struct _ERESOURCE **)(v13 + 32);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v17, 1u);
          v12 = *(_QWORD *)(v13 + 24);
          if ( v12 )
            _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          ExReleaseResourceLite(*(PERESOURCE *)(v13 + 32));
          KeLeaveCriticalRegion();
        }
        if ( v12 )
          goto LABEL_19;
        DCompSessionState = W32GetDCompSessionState(v16);
        v19 = *(struct _ERESOURCE **)(DCompSessionState + 32);
        if ( v19 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v19, 1u);
          v12 = *(_QWORD *)(DCompSessionState + 16);
          if ( v12 )
            _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          ExReleaseResourceLite(*(PERESOURCE *)(DCompSessionState + 32));
          KeLeaveCriticalRegion();
        }
        if ( v12 )
        {
LABEL_19:
          v31 = 0LL;
          v9 = -1073741275;
          v20 = *(_QWORD *)(v12 + 192);
          if ( v20 )
            v9 = (*(__int64 (__fastcall **)(__int64, size_t, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, v8, &v31);
          if ( v9 >= 0 )
          {
            v29 = 0LL;
            v30 = 0LL;
            v9 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *))(**(_QWORD **)(v12 + 296) + 64LL))(
                   *(_QWORD *)(v12 + 296),
                   &v29,
                   &v30);
            if ( v9 >= 0 )
            {
              do
              {
                Srca = 0LL;
                LODWORD(Size) = 0;
                v28[0] = 0;
                v21 = (*(unsigned __int8 (__fastcall **)(__int64, void **, size_t *, _DWORD *))(*(_QWORD *)v31 + 40LL))(
                        v31,
                        &Srca,
                        &Size,
                        v28);
                v27 = (unsigned __int8)v21;
                if ( (_DWORD)Size )
                {
                  memmove(v29, Srca, (unsigned int)Size);
                  v29 = (char *)v29 + (unsigned int)Size;
                  v22 = v30 - (unsigned int)Size;
                  v30 = v22;
                  v37 += v28[0];
                  v21 = v27;
                }
                else
                {
                  v22 = v30;
                }
              }
              while ( v21 && v22 >= 0x800 );
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 0xFFFFFFFF) == 1 )
          {
            DirectComposition::CConnection::~CConnection((DirectComposition::CConnection *)v12);
            GreDeleteFastMutex((char *)v12, v24, v25, v26);
          }
        }
        else
        {
          v9 = -1073741790;
        }
        KeLeaveCriticalRegion();
      }
      else
      {
        v9 = -1073741790;
      }
    }
  }
  else
  {
    v9 = -1073741811;
  }
  RtlCopyToUser(a2, &v37, 4uLL);
  RtlCopyToUser(a3, &v27, 4uLL);
  return (unsigned int)v9;
}
