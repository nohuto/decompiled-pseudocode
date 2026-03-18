/*
 * XREFs of ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18009D220
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18009D10C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x1800190B8 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEBXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18007A5B4 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEBXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGenerator(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  CPrimitiveGroupDrawListGenerator *v2; // rsi
  struct CSharedSection *v4; // r8
  int v6; // edx
  const void *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  __int64 *v12; // r14
  unsigned int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // r9d
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rsi
  int v25; // eax
  __int128 v27; // [rsp+30h] [rbp-30h] BYREF
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int128 v29; // [rsp+50h] [rbp-10h] BYREF
  CPrimitiveGroupDrawListGenerator *v30; // [rsp+90h] [rbp+30h] BYREF
  struct ID2D1PrivateCompositorBuffer *v31; // [rsp+98h] [rbp+38h] BYREF
  struct ID2D1PrivateCompositorBuffer *v32; // [rsp+A0h] [rbp+40h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v4 = (struct CSharedSection *)*((_QWORD *)this + 31);
  v6 = *((_DWORD *)this + 84);
  v7 = (const void *)*((_QWORD *)this + 41);
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v8 = CD2DSharedBuffer::CreateFromSharedSection(v7, v6, v4, &v31);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x228u, 0LL);
  }
  else
  {
    v10 = CD2DSharedBuffer::CreateFromSharedSection(
            *((const void **)this + 43),
            *((_DWORD *)this + 88),
            *((struct CSharedSection **)this + 31),
            &v32);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x22Eu, 0LL);
    }
    else
    {
      v11 = *((_QWORD *)this + 17);
      v12 = (__int64 *)((char *)this + 184);
      v13 = *((_DWORD *)this + 66);
      v14 = *((_DWORD *)this + 67);
      if ( v13 >= (unsigned int)((*((_QWORD *)this + 18) - v11) >> 3) )
        v13 = (*((_QWORD *)this + 18) - v11) >> 3;
      *((_DWORD *)this + 66) = v13;
      if ( v14 >= (unsigned int)((*((_QWORD *)this + 18) - v11) >> 3) - v13 )
        v14 = ((*((_QWORD *)this + 18) - v11) >> 3) - v13;
      v15 = *((_DWORD *)this + 68);
      *((_DWORD *)this + 67) = v14;
      if ( v15 >= (unsigned int)((__int64)(*((_QWORD *)this + 21) - *((_QWORD *)this + 20)) >> 3) )
        v15 = (__int64)(*((_QWORD *)this + 21) - *((_QWORD *)this + 20)) >> 3;
      *((_DWORD *)this + 68) = v15;
      v16 = DynArrayImpl<0>::Grow((__int64)this + 184, 8u, v14 + v13, 1, 0LL);
      v9 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x235u, 0LL);
      }
      else
      {
        v17 = *((_DWORD *)this + 66);
        v18 = 0LL;
        for ( *((_DWORD *)this + 52) = v17 + *((_DWORD *)this + 67); (unsigned int)v18 < v17; v17 = *((_DWORD *)this + 66) )
        {
          v19 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v18);
          *(_QWORD *)(*v12 + 8 * v18) = (v19 + 72) & -(__int64)(v19 != 0);
          v18 = (unsigned int)(v18 + 1);
        }
        if ( v17 < v17 + *((_DWORD *)this + 67) )
        {
          do
          {
            v20 = v17;
            v21 = *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v17++);
            *(_QWORD *)(*v12 + 8 * v20) = (v21 + 72) & -(__int64)(v21 != 0);
          }
          while ( v17 < *((_DWORD *)this + 67) + *((_DWORD *)this + 66) );
        }
        v22 = *v12;
        v23 = *((_QWORD *)this + 20);
        gsl::details::extent_type<-1>::extent_type<-1>(&v27, *((unsigned int *)this + 68));
        *((_QWORD *)&v27 + 1) = v23;
        if ( (_QWORD)v27 == -1LL
          || !v23 && (_QWORD)v27
          || (v24 = v22 + 8LL * *((unsigned int *)this + 66),
              gsl::details::extent_type<-1>::extent_type<-1>(&v28, *((unsigned int *)this + 67)),
              *((_QWORD *)&v28 + 1) = v24,
              (_QWORD)v28 == -1LL)
          || !v24 && (_QWORD)v28
          || (gsl::details::extent_type<-1>::extent_type<-1>(&v29, *((unsigned int *)this + 66)),
              *((_QWORD *)&v29 + 1) = v22,
              (_QWORD)v29 == -1LL)
          || !v22 && (_QWORD)v29 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v25 = CPrimitiveGroupDrawListGenerator::Create(v31, (__int64)v32, &v29, &v28, &v27, &v30);
        v9 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x24Du, 0LL);
          v2 = v30;
        }
        else
        {
          v2 = 0LL;
          *a2 = v30;
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>(v31);
  ReleaseInterfaceNoNULL<ID2D1Ink>(v32);
  if ( v2 )
    (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v2 + 8LL))(v2);
  return v9;
}
