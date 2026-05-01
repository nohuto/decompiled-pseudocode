/*
 * XREFs of memcpy_s_4 @ 0x180657578
 * Callers:
 *     ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x180098F34 (-BoolToQword@QwordHelpers@@YA_K_N@Z.c)
 *     wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x18018BF30 (wistd--__function--__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_c.c)
 *     ?GetVersion2Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV2@KnownGameList@@@Z @ 0x180656FB0 (-GetVersion2Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV2@KnownGameList@@@Z.c)
 *     ?GetVersion3Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV3@KnownGameList@@@Z @ 0x180657030 (-GetVersion3Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV3@KnownGameList@@@Z.c)
 *     ?GetVersion4Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV4@KnownGameList@@@Z @ 0x1806570B0 (-GetVersion4Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV4@KnownGameList@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1802D2EE6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_4(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v7; // rax
  errno_t v8; // ebx

  if ( !Destination )
    goto LABEL_2;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  else
  {
    memset_0(Destination, 0, DestinationSize);
    if ( !Source )
    {
LABEL_2:
      v7 = (errno_t *)_o__errno(Destination, DestinationSize, Source);
      v8 = 22;
LABEL_3:
      *v7 = v8;
      invalid_parameter_noinfo();
      return v8;
    }
    if ( DestinationSize < SourceSize )
    {
      v7 = (errno_t *)_o__errno(Destination, DestinationSize, Source);
      v8 = 34;
      goto LABEL_3;
    }
    return 22;
  }
}
