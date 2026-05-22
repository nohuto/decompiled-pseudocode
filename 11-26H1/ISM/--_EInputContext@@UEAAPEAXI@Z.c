/*
 * XREFs of ??_EInputContext@@UEAAPEAXI@Z @ 0x18003E610
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
InputContext *__fastcall InputContext::`vector deleting destructor'(InputContext *this, char a2)
{
  _QWORD *v4; // r15
  __int64 **v5; // rbx
  __int64 **i; // rbp
  __int64 *v7; // rdi
  __int64 *j; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD **v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  _QWORD **v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rdi
  __int64 v21; // rcx

  v4 = (_QWORD *)*((_QWORD *)this + 22);
  if ( v4 )
  {
    v5 = (__int64 **)v4[12];
    if ( v5 )
    {
      for ( i = (__int64 **)v4[13]; v5 != i; v5 += 3 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          for ( j = v5[1]; v7 != j; ++v7 )
          {
            v19 = *v7;
            if ( *v7 )
            {
              *v7 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            }
          }
          std::_Deallocate<16>(*v5, ((char *)v5[2] - (char *)*v5) & 0xFFFFFFFFFFFFFFF8uLL);
          *v5 = 0LL;
          v5[1] = 0LL;
          v5[2] = 0LL;
        }
      }
      std::_Deallocate<16>(v4[12], 8 * ((__int64)(v4[14] - v4[12]) >> 3));
      v4[12] = 0LL;
      v4[13] = 0LL;
      v4[14] = 0LL;
    }
    v9 = v4[1];
    if ( v9 && v9 != -1 )
      NtCloseCompositionInputSink(v9);
    operator delete(v4, (const struct std::nothrow_t *)0x78);
  }
  v10 = *((_QWORD *)this + 17);
  if ( v10 )
  {
    std::_Deallocate<16>(v10, (*((_QWORD *)this + 19) - v10) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  v11 = (_QWORD **)*((_QWORD *)this + 15);
  *v11[1] = 0LL;
  v12 = *v11;
  if ( v12 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      std::_Deallocate<16>(v12, 24LL);
      v12 = v13;
    }
    while ( v13 );
  }
  std::_Deallocate<16>(*((_QWORD *)this + 15), 24LL);
  v14 = *((_QWORD *)this + 6);
  if ( v14 )
  {
    std::_Deallocate<16>(v14, (*((_QWORD *)this + 8) - v14) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v15 = (_QWORD **)*((_QWORD *)this + 4);
  *v15[1] = 0LL;
  v16 = *v15;
  if ( *v15 )
  {
    do
    {
      v20 = (_QWORD *)*v16;
      v21 = v16[3];
      if ( v21 )
      {
        v16[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      std::_Deallocate<16>(v16, 32LL);
      v16 = v20;
    }
    while ( v20 );
  }
  std::_Deallocate<16>(*((_QWORD *)this + 4), 32LL);
  v17 = *((_QWORD *)this + 2);
  if ( v17 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xC0);
    else
      free(this);
  }
  return this;
}
