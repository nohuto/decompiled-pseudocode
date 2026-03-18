/*
 * XREFs of ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051528
 * Callers:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140050234 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140050700 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x14005AC38 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x14006913C (-EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x140051474 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051868 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalPrivateResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  int v6; // edi
  struct DirectComposition::CResourceMarshaler *v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r15
  unsigned __int64 i; // rax
  size_t v11; // r8
  int *v12; // rdx
  __int64 v13; // rax
  __int64 j; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rsi
  char *v20; // rax
  char *v21; // rbp
  unsigned __int64 v22; // kr00_8
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  char *v25; // rcx
  struct DirectComposition::CResourceMarshaler *Src; // [rsp+30h] [rbp-38h] BYREF
  struct DirectComposition::CResourceMarshaler *v27; // [rsp+88h] [rbp+20h] BYREF

  v27 = 0LL;
  v6 = DirectComposition::CApplicationChannel::CreatePrivateMarshaler(this, a2, &v27);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = v27;
  if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v27 + 32LL))(v27)
    || (v6 = DirectComposition::CConnection::AcquireShellResourceAccess(*((PERESOURCE **)this + 5)), v6 >= 0) )
  {
    v6 = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceMarshaler *))v7)(v7);
    if ( v6 >= 0 )
    {
      v8 = *((_QWORD *)this + 18);
      v6 = 0;
      if ( *((_QWORD *)this + 20) < v8 )
      {
        v9 = *((_QWORD *)this + 21);
        for ( i = v9 * *((_QWORD *)this + 19); *(_QWORD *)(i + *((_QWORD *)this + 15)); i = v9 * *((_QWORD *)this + 19) )
          v9 = (v9 + 1) % v8;
        *((_QWORD *)this + 21) = (v9 + 1) % v8;
LABEL_10:
        v11 = *((_QWORD *)this + 19);
        Src = v7;
        memmove((void *)(*((_QWORD *)this + 15) + v9 * v11), &Src, v11);
        *((_DWORD *)v7 + 8) = v9 + 1;
        ++*((_QWORD *)this + 20);
        if ( *((int *)this + 6) <= 2 )
        {
          v13 = *((unsigned int *)v7 + 9);
          v12 = dword_140274520;
          while ( (unsigned int)v13 < 0xC0 )
          {
            if ( (_DWORD)v13 == 157 )
            {
              v15 = 448LL;
              goto LABEL_20;
            }
            LODWORD(v13) = dword_140274520[v13];
          }
          for ( j = *((unsigned int *)v7 + 9); ; LODWORD(j) = dword_140274520[j] )
          {
            if ( (unsigned int)j >= 0xC0 )
            {
              v15 = 432LL;
              goto LABEL_20;
            }
            if ( (_DWORD)j == 28 )
              break;
          }
          v15 = 464LL;
LABEL_20:
          *((_QWORD *)v7 + 1) = *(_QWORD *)((char *)this + v15);
          *(_QWORD *)((char *)this + v15) = v7;
        }
        goto LABEL_21;
      }
      v18 = v8 + 1;
      v9 = *((_QWORD *)this + 18);
      if ( v8 + 1 >= v8 )
      {
        v19 = *((_QWORD *)this + 17);
        if ( v18 <= v19 )
        {
LABEL_29:
          ++*((_QWORD *)this + 18);
          goto LABEL_10;
        }
        if ( !v19 )
          v19 = 64LL;
        while ( v19 < v18 )
        {
          if ( v19 >= 0x400 )
          {
            while ( v19 < v18 )
            {
              if ( v19 + 1024 < v19 )
                goto LABEL_32;
              v19 += 1024LL;
            }
            break;
          }
          v22 = v19;
          v19 *= 2LL;
          if ( !is_mul_ok(v22, 2uLL) )
            goto LABEL_32;
        }
        v23 = v19 * *((_QWORD *)this + 19);
        if ( is_mul_ok(v19, *((_QWORD *)this + 19)) )
        {
          v6 = 0;
          v20 = (char *)(*((_BYTE *)this + 128)
                       ? Win32AllocPoolWithQuotaImpl(v8, v23, 0x746C4344u)
                       : Win32AllocPoolImpl(256LL, v23, 0x746C4344u));
          v21 = v20;
          if ( v20 )
          {
            v24 = *((_QWORD *)this + 18);
            if ( v24 )
              memmove(v20, *((const void **)this + 15), *((_QWORD *)this + 19) * v24);
            memset(
              &v21[*((_QWORD *)this + 18) * *((_QWORD *)this + 19)],
              0,
              *((_QWORD *)this + 19) * (v19 - *((_QWORD *)this + 18)));
            v25 = (char *)*((_QWORD *)this + 15);
            if ( v25 )
              GreDeleteFastMutex(v25);
            *((_QWORD *)this + 15) = v21;
            *((_QWORD *)this + 17) = v19;
            goto LABEL_29;
          }
        }
      }
LABEL_32:
      v6 = -1073741801;
    }
  }
  (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 96LL))(v7, 1LL);
LABEL_21:
  if ( v6 >= 0 )
  {
    if ( a2 == 2 )
    {
      v16 = *(_QWORD *)((*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, int *))(*(_QWORD *)v27 + 104LL))(
                          v27,
                          v12)
                      + 80);
      if ( (*(_DWORD *)(v16 + 24) & 1) == 0 )
      {
        *(_QWORD *)(v16 + 8) = *((_QWORD *)this + 61);
        *((_QWORD *)this + 61) = v16;
        *(_DWORD *)(v16 + 24) |= 1u;
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 48));
      }
    }
    *a3 = v27;
  }
  return (unsigned int)v6;
}
