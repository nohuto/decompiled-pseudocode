/*
 * XREFs of ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z @ 0x140028BF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1400295C4 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall CCompositionFrame::GetSurfaceUpdates(
        CCompositionFrame *this,
        struct CSM_SURFACE_UPDATE_ *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int v7; // edi
  CCompositionFrame *v9; // r15
  CCompositionFrame *v10; // rcx
  unsigned __int8 v11; // si
  __int64 result; // rax
  char *v13; // rcx
  CCompositionFrame *v14; // rdx
  char *v15; // r13
  __int64 v16; // rsi
  int v17; // r15d
  __int64 v18; // r15
  HANDLE CurrentThreadId; // rax
  __int64 v20; // rcx
  unsigned int *v21; // r15
  CCompositionFrame *v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rcx
  unsigned int v25; // eax
  bool v26; // cf
  char *v27; // r13
  char *v28; // rcx
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v30; // r13
  __int64 v31; // rcx
  char v32; // al
  _DWORD *v33; // rdx
  char *v34; // rax
  char *v35; // r8
  __int64 v36; // rcx
  int v37; // eax
  char *v38; // rcx
  __int128 v39; // xmm0
  int v40; // eax
  HANDLE v41; // rax
  char *v42; // rcx
  unsigned int v43; // eax
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  char *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // r15
  __int64 v50; // rax
  int v51; // eax
  char v52; // al
  char *v53; // r13
  _DWORD *v54; // rcx
  int v55; // eax
  __int128 v56; // xmm0
  int v57; // eax
  char *v58; // [rsp+60h] [rbp-68h] BYREF
  char *v59; // [rsp+68h] [rbp-60h]
  _DWORD *v60; // [rsp+70h] [rbp-58h] BYREF
  __int64 v61; // [rsp+78h] [rbp-50h]
  __int64 v62; // [rsp+80h] [rbp-48h]
  char *v63; // [rsp+88h] [rbp-40h]
  _QWORD *v64; // [rsp+D0h] [rbp+8h] BYREF
  char *v65; // [rsp+E8h] [rbp+20h] BYREF

  v7 = 0;
  if ( !*((_BYTE *)this + 242) )
  {
    v13 = (char *)*((_QWORD *)this + 28);
    if ( !v13 )
    {
      v14 = (CCompositionFrame *)*((_QWORD *)this + 31);
      if ( v14 != (CCompositionFrame *)((char *)this + 248) )
      {
        v13 = (char *)v14 - 8;
        *((_BYTE *)this + 240) = 1;
        *((_QWORD *)this + 28) = (char *)v14 - 8;
      }
    }
    result = *((unsigned __int8 *)this + 240);
    if ( (_BYTE)result )
    {
      v15 = (char *)a2 + 192;
      v59 = (char *)a2 + 192;
      while ( 1 )
      {
        if ( !a3 )
          goto LABEL_8;
        if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v13 + 72LL))(v13) )
          break;
LABEL_32:
        v22 = *(CCompositionFrame **)(*((_QWORD *)this + 28) + 8LL);
        if ( v22 == (CCompositionFrame *)((char *)this + 248) )
        {
          *((_BYTE *)this + 240) = 0;
          v13 = 0LL;
        }
        else
        {
          v13 = (char *)v22 - 8;
        }
        result = *((unsigned __int8 *)this + 240);
        *((_QWORD *)this + 28) = v13;
        if ( !(_BYTE)result )
          goto LABEL_2;
      }
      v16 = *(_QWORD *)(*((_QWORD *)this + 28) + 48LL);
      v61 = *((_QWORD *)this + 23);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v16 + 48, 0LL);
      v17 = -1073741823;
      if ( *(_QWORD *)(v16 + 88) == v61 && v61 || *(int *)(v16 + 64) <= 0 )
        goto LABEL_23;
      v64 = 0LL;
      if ( *(_DWORD *)(v16 + 160) )
      {
        v18 = *(_QWORD *)(v16 + 152);
        if ( v18 != v16 + 144 )
        {
          do
          {
            if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v18 - 24) + 24LL))(v18 - 24) )
              break;
            v48 = (_QWORD *)(v18 - 24);
            v18 = *(_QWORD *)(v18 + 8);
            v64 = v48;
          }
          while ( v18 != v16 + 144 );
          v49 = v64;
          if ( v64 )
          {
            v50 = *v64;
            v58 = 0LL;
            v51 = (*(__int64 (__fastcall **)(_QWORD *, char **))(v50 + 232))(v64, &v58);
            LODWORD(v65) = v51;
            if ( v51 >= 0 )
            {
              v52 = (*(__int64 (__fastcall **)(_QWORD *))(*v49 + 168LL))(v49);
              v53 = v59;
              LODWORD(v64) = 0;
              *(_DWORD *)a2 = 3 - (v52 != 0);
              *(_QWORD *)(v53 - 188) = *(_QWORD *)(v16 + 24);
              *((_QWORD *)v53 - 22) = v49[2];
              *((_DWORD *)v53 - 42) = *((_DWORD *)v58 + 7);
              *((_DWORD *)v53 - 41) = *((_DWORD *)v49 + 73);
              v54 = (_DWORD *)v49[37];
              *(_DWORD *)v53 = 10;
              v60 = v54;
              v55 = (*(__int64 (__fastcall **)(_DWORD *, char *, char *, _QWORD **))(*(_QWORD *)v54 + 56LL))(
                      v54,
                      v53,
                      v53 - 160,
                      &v64);
              if ( (_DWORD)v64 == 2 )
              {
                if ( v55 == -1073741789 )
                {
                  (*(void (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v60 + 64LL))(v60, v53 - 160);
                  *(_DWORD *)v53 = 1;
                }
              }
              else if ( (_DWORD)v64 )
              {
                if ( (_DWORD)v64 == 1 )
                  *(_DWORD *)v53 = -1;
              }
              else
              {
                *(_DWORD *)v53 = 0;
              }
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v60 + 16LL))(v60);
              *(_OWORD *)(v53 + 4) = *((_OWORD *)v49 + 19);
              *(_QWORD *)(v53 + 20) = v49[40];
              *((_DWORD *)v53 + 7) = *((_DWORD *)v49 + 82);
              v56 = *((_OWORD *)v49 + 3);
              *((_DWORD *)v49 + 76) = 0;
              *((_BYTE *)v49 + 43) = 0;
              *((_OWORD *)v53 + 2) = v56;
              *((_OWORD *)v53 + 3) = *((_OWORD *)v49 + 4);
              *((_OWORD *)v53 + 4) = *((_OWORD *)v49 + 5);
              *((_OWORD *)v53 + 5) = *((_OWORD *)v49 + 6);
              *((_OWORD *)v53 + 6) = *((_OWORD *)v49 + 7);
              *((_OWORD *)v53 + 7) = *((_OWORD *)v49 + 8);
              *((_OWORD *)v53 + 8) = *((_OWORD *)v49 + 9);
              *((_OWORD *)v53 + 9) = *((_OWORD *)v49 + 10);
              *((_OWORD *)v53 + 10) = *((_OWORD *)v49 + 11);
              v57 = (*(__int64 (__fastcall **)(_QWORD *))(*v49 + 192LL))(v49);
              v17 = (int)v65;
              *((_DWORD *)v53 + 44) = v57;
              *((_DWORD *)v53 + 45) = *((_DWORD *)v58 + 20);
              goto LABEL_22;
            }
            v17 = v51;
LABEL_23:
            CurrentThreadId = PsGetCurrentThreadId();
            v20 = v16 + 48;
            if ( CurrentThreadId == *(HANDLE *)(v16 + 56) )
            {
              *(_QWORD *)(v16 + 56) = 0LL;
              ExReleasePushLockExclusiveEx(v20, 0LL);
            }
            else
            {
              ExReleasePushLockSharedEx(v20, 0LL);
            }
            KeLeaveCriticalRegion();
            if ( v17 < 0 )
            {
              v15 = v59;
            }
            else
            {
              v21 = (unsigned int *)*((_QWORD *)this + 28);
              if ( (*(unsigned int (__fastcall **)(unsigned int *))(*(_QWORD *)v21 + 64LL))(v21) != 1 )
                v21 = 0LL;
              if ( v21 )
              {
                if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 2650;
                  if ( bTracingEnabled )
                  {
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
                      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                        v45,
                        v44,
                        v46,
                        0LL,
                        2,
                        -1,
                        (__int64)L"m_pGlobal != NULL",
                        2650LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                  }
                }
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 88LL))(
                  v16,
                  v21[30]);
              }
              a2 = (struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 376);
              v15 = v59 + 376;
              --a3;
              v59 += 376;
              ++v7;
            }
            goto LABEL_32;
          }
        }
        v15 = v59;
      }
      memset((char *)a2 + 4, 0, 0x174uLL);
      *(_DWORD *)a2 = 2;
      *(_QWORD *)(v15 - 188) = *(_QWORD *)(v16 + 24);
      v17 = 0;
LABEL_22:
      *(_QWORD *)(v16 + 88) = v61;
      goto LABEL_23;
    }
  }
LABEL_2:
  v9 = (CCompositionFrame *)*((_QWORD *)this + 29);
  *((_BYTE *)this + 242) = 1;
  if ( !v9 )
  {
    v10 = (CCompositionFrame *)*((_QWORD *)this + 33);
    if ( v10 != (CCompositionFrame *)((char *)this + 264) )
    {
      *((_QWORD *)this + 29) = v10;
      v9 = v10;
      *((_BYTE *)this + 241) = 1;
    }
  }
  v11 = *((_BYTE *)this + 241);
  if ( v11 )
  {
    while ( 1 )
    {
      if ( !a3 )
        goto LABEL_7;
      v23 = *((_DWORD *)v9 + 16);
      v24 = 0LL;
      v25 = *((_DWORD *)v9 + 20);
      v26 = v25 < v23;
      if ( v25 == v23 )
      {
        v25 = 0;
        *((_DWORD *)v9 + 20) = 0;
        v26 = v23 != 0;
      }
      if ( v26 )
        v24 = *((_QWORD *)v9 + 7) + 32LL * v25;
      if ( v24 )
        break;
LABEL_60:
      v9 = (CCompositionFrame *)**((_QWORD **)this + 29);
      if ( v9 == (CCompositionFrame *)((char *)this + 264) )
      {
        *((_BYTE *)this + 241) = 0;
        v9 = 0LL;
      }
      v11 = *((_BYTE *)this + 241);
      *((_QWORD *)this + 29) = v9;
      if ( !v11 )
        goto LABEL_6;
    }
    v27 = (char *)a2 + 192;
    v58 = (char *)a2 + 192;
    while ( 1 )
    {
      if ( !a3 )
        goto LABEL_7;
      v59 = *(char **)(v24 + 8);
      v62 = *((_QWORD *)this + 23);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v59 + 48, 0LL);
      v28 = v59;
      LODWORD(v64) = -1073741823;
      if ( (*((_QWORD *)v59 + 11) != v62 || !v62) && *((int *)v59 + 16) > 0 )
      {
        RenderingBuffer = CCompositionSurface::GetRenderingBuffer((CCompositionSurface *)(v59 + 40));
        v30 = RenderingBuffer;
        if ( RenderingBuffer )
        {
          v31 = *(_QWORD *)RenderingBuffer;
          v60 = 0LL;
          LODWORD(v64) = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _DWORD **))(v31 + 232))(
                           RenderingBuffer,
                           &v60);
          if ( (int)v64 < 0 )
          {
            v27 = v58;
            v28 = v59;
            goto LABEL_53;
          }
          v32 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v30 + 168LL))(v30);
          v33 = v58;
          v26 = v32 != 0;
          v34 = v59;
          v35 = v58 - 160;
          *(_DWORD *)a2 = 3 - v26;
          *(_QWORD *)(v33 - 47) = *((_QWORD *)v34 + 3);
          *((_QWORD *)v33 - 22) = *((_QWORD *)v30 + 2);
          v63 = v35;
          *(v33 - 42) = v60[7];
          *(v33 - 41) = *((_DWORD *)v30 + 73);
          v36 = *((_QWORD *)v30 + 37);
          LODWORD(v65) = 0;
          *v33 = 10;
          v61 = v36;
          v37 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *, char **))(*(_QWORD *)v36 + 56LL))(
                  v36,
                  v33,
                  v35,
                  &v65);
          if ( (_DWORD)v65 == 2 )
          {
            if ( v37 == -1073741789 )
            {
              (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v61 + 64LL))(v61, v63);
              *(_DWORD *)v58 = 1;
            }
          }
          else if ( (_DWORD)v65 )
          {
            if ( (_DWORD)v65 == 1 )
              *(_DWORD *)v58 = -1;
          }
          else
          {
            *(_DWORD *)v58 = 0;
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
          v38 = v58;
          *(_OWORD *)(v58 + 4) = *((_OWORD *)v30 + 19);
          *(_QWORD *)(v38 + 20) = *((_QWORD *)v30 + 40);
          *((_DWORD *)v38 + 7) = *((_DWORD *)v30 + 82);
          v39 = *((_OWORD *)v30 + 3);
          *((_DWORD *)v30 + 76) = 0;
          *((_BYTE *)v30 + 43) = 0;
          *((_OWORD *)v38 + 2) = v39;
          *((_OWORD *)v38 + 3) = *((_OWORD *)v30 + 4);
          *((_OWORD *)v38 + 4) = *((_OWORD *)v30 + 5);
          *((_OWORD *)v38 + 5) = *((_OWORD *)v30 + 6);
          *((_OWORD *)v38 + 6) = *((_OWORD *)v30 + 7);
          *((_OWORD *)v38 + 7) = *((_OWORD *)v30 + 8);
          *((_OWORD *)v38 + 8) = *((_OWORD *)v30 + 9);
          *((_OWORD *)v38 + 9) = *((_OWORD *)v30 + 10);
          *((_OWORD *)v38 + 10) = *((_OWORD *)v30 + 11);
          v40 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v30 + 192LL))(v30);
          v27 = v58;
          *((_DWORD *)v58 + 44) = v40;
          *((_DWORD *)v27 + 45) = v60[20];
        }
        else
        {
          memset((char *)a2 + 4, 0, 0x174uLL);
          v47 = v59;
          v27 = v58;
          *(_DWORD *)a2 = 2;
          *(_QWORD *)(v27 - 188) = *((_QWORD *)v47 + 3);
          LODWORD(v64) = 0;
        }
        v28 = v59;
        *((_QWORD *)v59 + 11) = v62;
      }
LABEL_53:
      v65 = v28 + 48;
      v41 = PsGetCurrentThreadId();
      v42 = v65;
      if ( v41 == *((HANDLE *)v59 + 7) )
      {
        *((_QWORD *)v65 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v42, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v65, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( (int)v64 >= 0 )
      {
        v27 += 376;
        a2 = (struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 376);
        --a3;
        v58 = v27;
        ++v7;
      }
      v43 = *((_DWORD *)v9 + 20) + 1;
      v24 = 0LL;
      *((_DWORD *)v9 + 20) = v43;
      if ( v43 < *((_DWORD *)v9 + 16) )
        v24 = *((_QWORD *)v9 + 7) + 32LL * v43;
      if ( !v24 )
        goto LABEL_60;
    }
  }
LABEL_6:
  *((_BYTE *)this + 242) = 0;
LABEL_7:
  result = v11;
LABEL_8:
  *a4 = v7;
  return result;
}
