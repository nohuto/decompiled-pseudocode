/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___::_CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___ @ 0x1804687B8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___::_scalar_deleting_destructor_ @ 0x18046B940 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___--_scala.c)
 * Callees:
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::__lambda_75452c5cb5e77a67412b4cfed81632b0_ @ 0x180468648 (_lambda_75452c5cb5e77a67412b4cfed81632b0_--__lambda_75452c5cb5e77a67412b4cfed81632b0_.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___::_CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = lambda_75452c5cb5e77a67412b4cfed81632b0_::__lambda_75452c5cb5e77a67412b4cfed81632b0_(
             (__int64 *)(a1 + 16),
             a2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
