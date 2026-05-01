/*
 * XREFs of ?GetIcon@UTMIconLoader@Discover@PenWorkspace@@UEAAJUtagSIZE@@MPEAPEAUIStream@@PEAU4@PEAK@Z @ 0x1803E66A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803E64D8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PenWorkspace::Discover::UTMIconLoader::GetIcon(
        PenWorkspace::Discover::UTMIconLoader *this,
        struct tagSIZE a2,
        float a3,
        struct IStream **a4,
        struct tagSIZE *a5,
        unsigned int *a6)
{
  struct tagSIZE *v8; // r14
  unsigned int *v9; // r12
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rsi
  int v16; // eax
  __m128 v17; // xmm7
  __m128 v18; // xmm6
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, unsigned __int64, unsigned int **); // rsi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // edx
  char *v25; // r8
  unsigned int *v26; // rbx
  __int64 (__fastcall *v27)(unsigned int *, __int64 *); // rsi
  int StreamOverRandomAccessStream; // eax
  __int64 v29; // rdx
  __int64 v31[2]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v33; // [rsp+A0h] [rbp+40h] BYREF
  struct tagSIZE v34; // [rsp+A8h] [rbp+48h]
  __int64 v35; // [rsp+B8h] [rbp+58h] BYREF

  v34 = a2;
  *a4 = 0LL;
  v8 = a5;
  a5->cy = 0;
  v8->cx = 0;
  v9 = a6;
  *a6 = 0;
  v31[0] = 0LL;
  v10 = *((_QWORD *)this + 5);
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 56LL);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v31);
  v12 = v11(v10, v31);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v33 = 0LL;
    v14 = v31[0];
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31[0] + 64LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v33);
    v16 = v15(v14, &v33);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
        (const char *)(unsigned int)v16);
LABEL_5:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v33);
      goto LABEL_20;
    }
    v17 = (__m128)COERCE_UNSIGNED_INT((float)a2.cx);
    v17.m128_f32[0] = v17.m128_f32[0] * a3;
    v18 = (__m128)COERCE_UNSIGNED_INT((float)v34.cy);
    v18.m128_f32[0] = v18.m128_f32[0] * a3;
    a6 = 0LL;
    v19 = v33;
    v20 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned int **))(*(_QWORD *)v33 + 80LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&a6);
    v22 = v20(v19, v21, _mm_unpacklo_ps(v17, v18).m128_u64[0], &a6);
    v13 = v22;
    if ( v22 >= 0 )
    {
      LODWORD(a5) = 0;
      v22 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE **))(*(_QWORD *)v31[0] + 72LL))(v31[0], &a5);
      v13 = v22;
      if ( v22 >= 0 )
      {
        *v9 = BYTE1(a5) | (BYTE2(a5) << 8) | ((BYTE3(a5) | ((unsigned __int8)a5 << 8)) << 16);
        v22 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::Streams::IRandomAccessStream *>,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream *>>(
                (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a6,
                v24,
                v25);
        v13 = v22;
        if ( v22 >= 0 )
        {
          v35 = 0LL;
          v26 = a6;
          v27 = *(__int64 (__fastcall **)(unsigned int *, __int64 *))(*(_QWORD *)a6 + 64LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
          StreamOverRandomAccessStream = v27(v26, &v35);
          v13 = StreamOverRandomAccessStream;
          if ( StreamOverRandomAccessStream >= 0 )
          {
            StreamOverRandomAccessStream = CreateStreamOverRandomAccessStream(
                                             v35,
                                             &GUID_0000000c_0000_0000_c000_000000000046,
                                             a4);
            v13 = StreamOverRandomAccessStream;
            if ( StreamOverRandomAccessStream >= 0 )
            {
              *v8 = a2;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&a6);
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v33);
              v13 = 0;
              goto LABEL_20;
            }
            v29 = 63LL;
          }
          else
          {
            v29 = 61LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v29,
            (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
            (const char *)(unsigned int)StreamOverRandomAccessStream);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
          goto LABEL_9;
        }
        v23 = 58LL;
      }
      else
      {
        v23 = 54LL;
      }
    }
    else
    {
      v23 = 51LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
      (const char *)(unsigned int)v22);
LABEL_9:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&a6);
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
    (const char *)(unsigned int)v12);
LABEL_20:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v31);
  return v13;
}
