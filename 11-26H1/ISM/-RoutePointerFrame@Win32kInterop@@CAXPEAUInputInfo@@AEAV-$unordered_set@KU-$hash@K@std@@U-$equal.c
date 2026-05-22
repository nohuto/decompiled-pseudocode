/*
 * XREFs of ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x180011720
 * Callers:
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@H@Z @ 0x180011520 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180011858 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ?SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800F362C (-SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV-$unordered_set@KU-$hash@K@std@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::RoutePointerFrame(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rbp
  char *v8; // rbx
  __int64 size_of; // rax
  char *v10; // rdi
  char *v11; // r8
  __int64 i; // rdx
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 16) )
    Win32kInterop::SendCancelNotificationToGestureTargeting(a2, a1);
  v7 = *(unsigned int *)(a1 + 316);
  v8 = 0LL;
  if ( *(_DWORD *)(a1 + 316) )
  {
    size_of = std::_Get_size_of_n<4>((unsigned int)v7);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    v8 = &v10[4 * v7];
    memset_0(v10, 0, 4 * v7);
    v11 = v8;
  }
  else
  {
    v11 = 0LL;
    v10 = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 316); i = (unsigned int)(i + 1) )
    *(_DWORD *)&v10[4 * i] = *(_DWORD *)(a1 + 144 * i + 324);
  result = PointerInputMediator::RoutePointers(
             *(unsigned int *)(a1 + 328),
             a3,
             (v11 - v10) >> 2,
             v10,
             a1 + 88,
             a4 != 0,
             0);
  if ( v10 )
    return std::_Deallocate<16>(v10, (v8 - v10) & 0xFFFFFFFFFFFFFFFCuLL);
  return result;
}
