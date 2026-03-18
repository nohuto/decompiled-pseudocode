/*
 * XREFs of ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400511B4
 * Callers:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400502F8 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x140051474 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  int v4; // esi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r15
  unsigned __int64 i; // rax
  size_t v8; // r8
  __int64 j; // rax
  __int64 k; // rax
  __int64 v11; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdi
  char *v15; // rax
  char *v16; // rbp
  unsigned __int64 v17; // kr00_8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // kr10_8
  __int64 v21; // r8
  char *v22; // rcx
  struct DirectComposition::CResourceMarshaler *Src; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v4 = DirectComposition::CConnection::AcquireShellResourceAccess(*((DirectComposition::CConnection **)this + 5));
    if ( v4 < 0 )
      goto LABEL_27;
  }
  v4 = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceMarshaler *))a2)(a2);
  if ( v4 < 0 )
    goto LABEL_27;
  v5 = *((_QWORD *)this + 18);
  v4 = 0;
  if ( *((_QWORD *)this + 20) >= v5 )
  {
    v13 = v5 + 1;
    v6 = *((_QWORD *)this + 18);
    if ( v5 + 1 >= v5 )
    {
      v14 = *((_QWORD *)this + 17);
      if ( v13 <= v14 )
      {
LABEL_23:
        ++*((_QWORD *)this + 18);
        goto LABEL_9;
      }
      if ( !v14 )
        v14 = 64LL;
      while ( v14 < v13 )
      {
        if ( v14 >= 0x400 )
        {
          while ( v14 < v13 )
          {
            if ( v14 + 1024 < v14 )
              goto LABEL_26;
            v14 += 1024LL;
          }
          break;
        }
        Src = 0LL;
        v17 = v14;
        v14 *= 2LL;
        if ( !is_mul_ok(v17, 2uLL) )
          goto LABEL_26;
      }
      v18 = *((_QWORD *)this + 19);
      Src = 0LL;
      v20 = v18;
      v19 = v14 * v18;
      if ( is_mul_ok(v14, v20) )
      {
        v4 = 0;
        v15 = (char *)(*((_BYTE *)this + 128)
                     ? Win32AllocPoolWithQuotaImpl(v5, v19, 0x746C4344u)
                     : Win32AllocPoolImpl(256LL, v19, 0x746C4344u));
        v16 = v15;
        if ( v15 )
        {
          v21 = *((_QWORD *)this + 18);
          if ( v21 )
            memmove(v15, *((const void **)this + 15), *((_QWORD *)this + 19) * v21);
          memset(
            &v16[*((_QWORD *)this + 18) * *((_QWORD *)this + 19)],
            0,
            *((_QWORD *)this + 19) * (v14 - *((_QWORD *)this + 18)));
          v22 = (char *)*((_QWORD *)this + 15);
          if ( v22 )
            GreDeleteFastMutex(v22);
          *((_QWORD *)this + 15) = v16;
          *((_QWORD *)this + 17) = v14;
          goto LABEL_23;
        }
      }
    }
LABEL_26:
    v4 = -1073741801;
LABEL_27:
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
    return (unsigned int)v4;
  }
  v6 = *((_QWORD *)this + 21);
  for ( i = v6 * *((_QWORD *)this + 19); *(_QWORD *)(i + *((_QWORD *)this + 15)); i = v6 * *((_QWORD *)this + 19) )
    v6 = (v6 + 1) % v5;
  *((_QWORD *)this + 21) = (v6 + 1) % v5;
LABEL_9:
  v8 = *((_QWORD *)this + 19);
  Src = a2;
  memmove((void *)(*((_QWORD *)this + 15) + v6 * v8), &Src, v8);
  *((_DWORD *)a2 + 8) = v6 + 1;
  ++*((_QWORD *)this + 20);
  if ( *((int *)this + 6) <= 2 )
  {
    for ( j = *((unsigned int *)a2 + 9); (unsigned int)j < 0xC0; LODWORD(j) = dword_140274520[j] )
    {
      if ( (_DWORD)j == 157 )
      {
        v11 = 448LL;
        goto LABEL_19;
      }
    }
    for ( k = *((unsigned int *)a2 + 9); ; LODWORD(k) = dword_140274520[k] )
    {
      if ( (unsigned int)k >= 0xC0 )
      {
        v11 = 432LL;
        goto LABEL_19;
      }
      if ( (_DWORD)k == 28 )
        break;
    }
    v11 = 464LL;
LABEL_19:
    *((_QWORD *)a2 + 1) = *(_QWORD *)((char *)this + v11);
    *(_QWORD *)((char *)this + v11) = a2;
  }
  return (unsigned int)v4;
}
